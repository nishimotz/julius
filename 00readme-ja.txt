======================================================================
                  Large Vocabulary Continuous Speech
                          Recognition Engine

                                Julius

                                                (Rev 4.1.5 2010/06/04)
                                                (Rev 4.1.4 2009/12/25)
                                                (Rev 4.1.3 2009/11/02)
                                                (Rev 4.1.2 2009/02/12)
                                                (Rev 4.1.1 2008/12/13)
                                                (Rev 4.1   2008/10/03)
                                                (Rev 4.0.2 2008/05/27)
                                                (Rev 4.0   2007/12/19)
                                                (Rev 3.5.3 2006/12/29)
                                                (Rev 3.4.2 2004/04/30)
                                                (Rev 2.0   1999/02/20)
                                                (Rev 1.0   1998/02/20)

 Copyright (c) 1991-2010 ���s��w �͌�������
 Copyright (c) 1997-2000 ��񏈗��U�����Ƌ���(IPA)
 Copyright (c) 2000-2005 �ޗǐ�[�Ȋw�Z�p��w�@��w ���쌤����
 Copyright (c) 2005-2010 ���É��H�Ƒ�w Julius�J���`�[��
 All rights reserved
======================================================================

Julius �ɂ���
=================

Julius �́C�����F���V�X�e���̊J���E�����̂��߂̃I�[�v���\�[�X�̍����\
�Ȕėp���b�A�������F���G���W���ł��D������b�̘A�������F������ʂ�PC
��łقڎ����ԂŎ��s�ł��܂��D�܂��C�����ėp���������C���������⌾�ꃂ
�f���E�������f���Ȃǂ̉����F���̊e���W���[����g�ݑւ��邱�ƂŁC�l�X��
���L���p�r�ɉ��p�ł��܂��D ����v���b�g�t�H�[���� Linux, Windows�C
���̑� Unix ���ł��D�ڍׁE�֘A���͈ȉ��� URL �������������D

    http://julius.sourceforge.jp/


Julius-4.1.5
=============

�o�[�W���� 4.1.5 �̓o�O�C���̃����[�X�ł��D�A���S���Y����̃o�O�C����
���āA1) ���@�F�����Ɏ�ɑ�2�p�X�ŒP��}���y�i���e�B�������������Ă�
�Ȃ��A2) ��2�p�X�ōŏ��̒P��("</s>"�ɌŒ�)��1-gram�m����LM�X�R�A�ɃJ�E
���g����Ă��Ȃ��A��2�_���C������܂����B��2�p�X�ŗ��R�s���̒T�����s��
���������Ă����ꍇ�A���̍ŐV�ł��g�����ƂŌy�������\��������܂��B

�ύX�_�̏ڍׂȈꗗ�� Release-ja.txt ���������������D


�t�@�C���̍\��
===============

	00readme-ja.txt		�ŏ��ɓǂޕ����i���̃t�@�C���j
	LICENSE.txt		���C�Z���X����
	Release-ja.txt		�����[�X�m�[�g/�ύX����
	configure		configure�X�N���v�g
	configure.in		
	Sample.jconf		jconf �ݒ�t�@�C���T���v��
	julius/			Julius �\�[�X
	libjulius/		JuliusLib �R�A�G���W�����C�u���� �\�[�X
	libsent/		JuliusLib �ėp���C�u���� �\�[�X
	adinrec/		�^���c�[�� adinrec
	adintool/		�����^��/����M�c�[�� adintool
	generate-ngram/		N-gram�������c�[��
	gramtools/		���@�쐬�c�[���Q
	jcontrol/		�T���v���l�b�g���[�N�N���C�A���g jcontrol
	mkbingram/		�o�C�i��N-gram�쐬�c�[�� mkbingram
	mkbinhmm/		�o�C�i��HMM�쐬�c�[�� mkbinhmm
	mkgshmm/		GMS�p�������f���ϊ��c�[�� mkgshmm
	mkss/			�m�C�Y���σX�y�N�g���Z�o�c�[�� mkss
	jclient-perl/		A simple perl version of module mode client
	plugin/			�v���O�C���\�[�X�R�[�h�̃T���v���Ǝd�l����
	man/			�}�j���A����
	support/		�J���p�X�N���v�g


�g�p���@�E�h�L�������g
=======================

�{�A�[�J�C�u�ɕt�����Ă���̂̓\�[�X�R�[�h�C�o�[�W�����՗��C�T���v����
jconf �ݒ�t�@�C������ъe��I�����C���}�j���A��(.man)�݂̂ł��D

�h�L�������g�̑����� JuliusBook �ɓ�������܂����BJuliusBook ���܂߁A
�����̃h�L�������g�� Julius �� Web �y�[�W�ɂčŐV�ł����邱�Ƃ��ł���
���D���ׂẴI�v�V�����̐�����R���p�C�����@�C�`���[�g���A������l�X��
�g�p���@�C�e�@�\�̏Љ�C�����������̎���������܂��̂ŁC��������䗗��
�����D

    �z�[���y�[�W�Fhttp://julius.sourceforge.jp/

�܂��C��L�z�[���y�[�W�ɂ����āCJulius��p����������A�v���P�[�V�����J
���Ɋւ�����������s�����߂́u�J���҃t�H�[�����v��ݒu���Ă���܂��D
�ŐV�� Julius �� CVS �X�V���Ȃǂ����e����܂��D
�ǂ����A�N�Z�X���������D

    Julius Forum: http://julius.sourceforge.jp/forum/


���C�Z���X
===========

Julius �̓I�[�v���\�[�X�\�t�g�E�F�A�ł��D
�w�p�p�r�E���p���܂߁C���p�Ɋւ��ē��ɐ����͂���܂���D
���p�����ɂ��ẮC�����̕��� "LICENSE.txt" �ɂ���܂��̂ł��ǂ݉������D


�A����
===========

Julius �Ɋւ��邲����E���₢���킹�́C��LWeb�y�[�W��̃t�H�[�����C
���邢�͉��L�̃��[���A�h���X�܂ł��₢���킹������
('at' �� '@' �ɓǂݑւ��Ă�������)

	julius-info at lists.sourceforge.jp

�ȏ�
