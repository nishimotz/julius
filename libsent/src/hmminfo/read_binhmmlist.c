/**
 * @file   read_rdhmmlist.c
 * 
 * <JA>
 * @brief  HMMList�ե�������ɤ߹���ʥХ��ʥ��ǡ�
 *
 * HMMList �ե�����ϡ������β���ɽ���ʥȥ饤�ե���ɽ���ˤ���
 * �ºݤ��������Ƥ��� %HMM �ؤΥޥåԥ󥰤�Ԥʤ��ե�����Ǥ���
 * 
 * HMMList�ե�����Ǥϡ��о줷���벻�ǤˤĤ��ơ��б�����
 * HMM �����̾���򵭽Ҥ��ޤ�����Ԥˣ��ĤŤġ���1�����˲���̾��
 * ���ڡ����Ƕ��ڤä���2�������������Ƥ���ºݤ� %HMM ̾����ꤷ�ޤ���
 * ��1��������2����ब����Ʊ����硤���ʤ�����β���̾�Υ�ǥ뤬ľ��
 * %HMM �Ȥ����������Ƥ�����ϡ���2�����Ͼ�ά���뤳�Ȥ��Ǥ��ޤ���
 *
 * �ȥ饤�ե�����ѻ��ϡ�HMMList�ե�������о줷�������ƤΥȥ饤�ե����
 * �Ĥ��Ƶ��Ҥ���ɬ�פ�����������դ��Ʋ��������⤷Ϳ����줿ǧ������
 * ����о줷����ȥ饤�ե���HMMList�˵��Ҥ���Ƥ��ʤ���硤
 * ���顼�Ȥʤ�ޤ���
 * </JA>
 * 
 * <EN>
 * @brief  Read in HMMList file from binary format
 *
 * HMMList file specifies how the phones as described in word dictionary,
 * or their context-dependent form, should be mapped to actual defined %HMM.
 *
 * In HMMList file, the possible phone names and their corresponding %HMM
 * name should be specified one per line.  The phone name should be put on
 * the first column, and its corresponding %HMM name in the HTK %HMM definition
 * file should be defined on the second column.  If the two strings are
 * the same, which occurs when a %HMM of the phone name is directly defined,
 * the second column can be omitted.
 *
 * When using a triphone model, ALL the possible triphones that can appear
 * on the given word dictionary should be specified in the HMMList file.
 * If some possible triphone are not specified in the HMMList, Julius
 * produces error.
 * </EN>
 * 
 * @author Akinobu LEE
 * @date   Wed Feb 16 04:04:23 2005
 *
 * $Revision: 1.1 $
 * 
 */
/*
 * Copyright (c) 1991-2007 Kawahara Lab., Kyoto University
 * Copyright (c) 2000-2005 Shikano Lab., Nara Institute of Science and Technology
 * Copyright (c) 2005-2007 Julius project team, Nagoya Institute of Technology
 * All rights reserved
 */

#include <sent/stddefs.h>
#include <sent/htk_hmm.h>
#include <sent/ptree.h>

static boolean
load_hmmlist_callback(void **data_p, void *data, FILE *fp)
{
  HTK_HMM_INFO *hmminfo = data;
  HMM_Logical *new;
  int len;
  char buf[MAX_HMMNAME_LEN];
  HTK_HMM_Data *d;

  new = (HMM_Logical *)mybmalloc2(sizeof(HMM_Logical), &(hmminfo->lroot));
  if (myfread(&(new->is_pseudo), sizeof(boolean), 1, fp) < 1) return FALSE;
  if (myfread(&len, sizeof(int), 1, fp) < 1) return FALSE;
  new->name = (char *)mybmalloc2(len, &(hmminfo->lroot));
  if (myfread(new->name, len, 1, fp) < 1) return FALSE;
  if (myfread(&len, sizeof(int), 1, fp) < 1) return FALSE;
  if (myfread(buf, len, 1, fp) < 1) return FALSE;
  if (new->is_pseudo) {
    jlog("Error: sorry, pseudo logical phone saving not implemented yet\n");
    return FALSE;
  } else {
    d = htk_hmmdata_lookup_physical(hmminfo, buf);
    if (d == NULL) {
      jlog("Error: load_hmmlist_callback: no name \"%s\" in hmmdefs!\n", buf);
      return FALSE;
    }
    new->body.defined = d;
  }
  new->next = hmminfo->lgstart;
  hmminfo->lgstart = new;

  *data_p = new;
  
  return TRUE;
}

boolean
load_hmmlist_bin(FILE *fp, HTK_HMM_INFO *hmminfo)
{
  HMM_Logical *l;
  int n;

  if (aptree_read(fp, &(hmminfo->logical_root), &(hmminfo->lroot), hmminfo, load_hmmlist_callback) == FALSE) {
    jlog("Error: load_hmmlist_bin: failed to read hmmlist from binary file\n");
    return FALSE;
  }
  n = 0;
  for(l=hmminfo->lgstart;l;l=l->next) n++;
  hmminfo->totallogicalnum = n;

  return TRUE;
}
