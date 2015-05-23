======================================================================
                  Large Vocabulary Continuous Speech
                          Recognition Engine

                                Julius

                                                (Rev 4.3.1 2014/01/15)
                                                (Rev 4.3   2013/12/25)
                                                (Rev 4.2.3 2013/06/30)
                                                (Rev 4.2.2 2012/08/01)
                                                (Rev 4.2.1 2011/12/25)
                                                (Rev 4.2   2011/05/01)
                                                (Rev 4.1.5 2010/06/04)
                                                (Rev 4.1   2008/10/03)
                                                (Rev 4.0.2 2008/05/27)
                                                (Rev 4.0   2007/12/19)
                                                (Rev 3.5.3 2006/12/29)
                                                (Rev 3.4.2 2004/04/30)
                                                (Rev 2.0   1999/02/20)
                                                (Rev 1.0   1998/02/20)

 Copyright (c) 1991-2013 ���s��w �͌�������
 Copyright (c) 1997-2000 ��񏈗��U�����Ƌ���(IPA)
 Copyright (c) 2000-2005 �ޗǐ�[�Ȋw�Z�p��w�@��w ���쌤����
 Copyright (c) 2005-2013 ���É��H�Ƒ�w Julius�J���`�[��
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


Julius-4.3
=============

�o�[�W���� 4.3 �ł́ADNN-HMM (Deep Neural-Network HMM) ��p�����I�����C
���f�R�[�f�B���O�̂��߂̋@�\���ǉ�����܂����B��̓I�ɂ́A��ԏo�͊m��
�x�N�g��"outprob vector" ����͂Ƃ����f�R�[�f�B���O�A�l�b�g���[�N�o�R��
�����ʃx�N�g���i����я�ԏo�͊m���x�N�g���j���͂̃T�|�[�g�A���A���^�C
���̂��߂� CVN (cepstral variance normalization), �t�B���^�o���N�x�[�X
�̓�����(FBANK/MELSPEC)�̃T�|�[�g�ł��B�܂��A�c�[�� adintool �ɓ�����
�𒊏o���ăl�b�g���[�N�փ��A���^�C�����M����@�\���ǉ�����܂����B

�V�I�v�V�����F
  [-input vecnet]       �l�b�g���[�N���������/�o�͊m���x�N�g����ǂݍ���
  [-input outprob]      HTK�p�����[�^�t�@�C�����o�͊m���x�N�g���Ƃ��ēǂݍ���
  [-outprobout [file]]  �v�Z���ꂽ�o�͊m���s���HTK�`���t�@�C���ɕۑ�(debug)

�l�b�g���[�N�̓����ʃx�N�g������M�́A�Ⴆ�Έȉ��̂悤�Ɏ������Ƃ��ł��܂��F

  [�T�[�o]
  % julius -C file.jconf -input vecnet

  [�N���C�A���g�i�}�C�N�t���j]
  % adintool -in mic -out vecnet -paramtype MFCC_E_D_N_Z -veclen 25 -C file.jconf

adintool �ɂ́A�����ʃx�N�g���̃^�C�v ("-paramtype TYPE") �Ƒ�������
�i"-veclen length"�j��K���w�肷��K�v������܂��B�܂��A�����ʒ��o����
�� Julius�g�p���Ɠ��l��Julius�Ɠ����I�v�V������p���Ďw�肵�܂��B
adintool �� Julius �̃��C�u������p���Ă��� Jconf �t�@�C����ǂݍ��߂�
���̂ŁAJulius �P�̂ŔF�������삷��Ƃ��� Jconf �t�@�C�������̂܂�
adintool �� "-C" �ŗ^����̂��悢�ł��傤�B�i��L�̗�j

�ύX�_�̏ڍׂȈꗗ�� Release-ja.txt ���������������D
�܂� "-help" �����Ď��s���邱�ƂŃI�v�V�����̑S���X�g���o�͂���܂��B


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
 (new)  dnntools/		Sample programs for dnn and vecnet client



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
���p�����ɂ��ẮC�����̕��� "LICENSE.txt" �����ǂ݉������D

�܂��ȉ��̃t�@�C����f�B���N�g������ Copyright �����Q�Ɖ������B

  gramtools/gram2sapixml/gram2sapixml.pl.in
  libsent/src/wav2mfcc/wav2mfcc-*.c
  libsent/src/adin/pa/
  msvc/portaudio/
  msvc/zlib/


�A����
===========

Julius �Ɋւ��邲����E���₢���킹�́C��LWeb�y�[�W��̃t�H�[�����C
���邢�͉��L�̃��[���A�h���X�܂ł��₢���킹������
('at' �� '@' �ɓǂݑւ��Ă�������)

	julius-info at lists.sourceforge.jp

�ȏ�
