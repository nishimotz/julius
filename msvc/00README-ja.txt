Julius�̃R���p�C�����@ / Julius �N���X
=======================================

���̃t�@�C���ł� Microsoft Visual C++ 2008 �ɂ����� Julius �̃R���p�C��
���@�ɂ��ĉ�����܂��D�܂��CGUI�ŃT���v���A�v���P�[�V�����ł���
"SampleApp" �� Julius �̃��b�p�[�N���X�̒�`�ɂ��Ă�������܂��D�R��
�p�C���ƃe�X�g�̕��@��m�肽�����͈ȉ����������������D

�T�|�[�g���� MSVC �̃o�[�W������ 2008 �݂̂ł���CProfessional Edition
����� Express Edition �ł̃R���p�C�����m�F���Ă��܂��D�܂��CWindows
XP, Vista 32bit/64bit �œ���m�F���Ă��܂��D

Julius ��V���Ɏg�p����ꍇ�C�������f���C���ꃂ�f���C����� Julius �̐�
����L�q���� jconf �t�@�C�����K�v�ƂȂ�܂��D�ڍׂ͈ȉ����������������D


1. ����
========

1.1 �{��
=========

Julius ���R���p�C������ɂ� "Microsoft DirectX SDK" ���K�v�ł��D
Microsoft �� �E�F�u�T�C�g������肵�Ă��������D

�܂��CJulius �͈ȉ���2�̃I�[�v���\�[�X�̃��C�u�������g�p���܂��D

   - zlib
   - portaudio (V19)

��������R���p�C���ς݂� win32 ���C�u�����ƃw�b�_�� "zlib" ��
"portaudio" �f�B���N�g���̒��Ɋ܂܂�Ă��܂��D����炪����ɓ��삵�Ȃ�
�ꍇ�͎��g�ŃR���p�C���������C�w�b�_�ƃ��C�u������u�������Ă��������D
�܂��Cportaudio ���R���p�C�������ꍇ�� "Release" ��"Debug" �f�B���N�g��
�ȉ��� DLL ���u�������Ă��������D

1.2 ���f��
===========

Julius�𓮂������߂ɂ͉������f���C���ꃂ�f����2�̃��f���ƁCJulius ��
�ݒ���L�q���� jconf �t�@�C�����K�v�ƂȂ�܂��D���f���̎d�l�C�T�|�[�g��
�́C�g�����̏ڍׁC���萫�Ȃǂɂ��Ă� Julius �̃E�F�u�y�[�W���Q�Ƃ���
���������D�Ȃ��C�E�F�u�y�[�W�ł͓��{��̕W�����f�����܂Ƃ߂��f�B�N�e�[
�V�����L�b�g��z�z���Ă��܂��D

�Ȃ��C�f�B�N�e�[�V�����L�b�g�� "SampleApp" �Ŏg�p����ꍇ�Cjconf �ɋL�q
����Ă��� -charconv �I�v�V�������폜���Ă���g�p���Ă��������D


2. �R���p�C��
==============

"JuliusLib.sln" �� MS VC++ �ŊJ���C�r���h���Ă��������D"Debug" ��
"Release" �f�B���N�g���̒��� "julius.exe" �� "SampleApp.exe" ����������
�܂��D

"zlib" �� "portaudio" �̃����N���ɃG���[���N�����ꍇ�͎��g�ŃR���p�C��
�������C�w�b�_�ƃ��C�u������u�������Ă��������D�܂��Cportaudio ���R��
�p�C�������ꍇ�� "Release" ��"Debug" �f�B���N�g���ȉ��� DLL ���u������
�Ă��������D


3. �e�X�g
==========

3.1  julius.exe
-----------------

"julius.exe" �� Win32 �̃R���\�[���A�v���P�[�V�����ł��D�R�}���h�v����
�v�g�� jconf �t�@�C�����w�肷�邱�ƂŎ��s���邱�Ƃ��ł��܂��D

    % julius.exe -C xxx.jconf

3.2  SampleApp.exe
-------------------

"SampleApp.exe" �̓V���v���� Julius ���b�p�[�N���X�� JuliusLib ���C�u��
�����g�p���� Julius ��GUI�ŃT���v���A�v���P�[�V�����ł��D

�g�p����ɂ́CSampleApp ���N����C���j���[����g�p������ jconf �t�@�C��
���J���C���������j���[����G���W���̎��s���w�肵�܂��DJulius �͎q�X���b
�h�Ƃ��ē��삵�C�������͊J�n��F�����ʏo�͂Ȃǂ̊e�C�x���g�����C�����b
�Z�[�W�ɕ`�悵�܂��D

���ʂ̕\���ɖ�肪����ꍇ�CSampleApp.cpp ��98�s�ɂ��郍�P�[���̐ݒ���C
�g�p���錾�ꃂ�f���ɍ��킹�ĕύX���ăR���p�C�����Ȃ����Ă��������D

Julius �̏o�͂� "juliuslog.txt" �ɕۑ�����܂��D���� Julius �ɃG���[��
�N�����ꍇ�C���̃t�@�C�����`�F�b�N���Ă��������D

�Ȃ��CSampleApp �Ńf�B�N�e�[�V�����L�b�g���g�p����ꍇ�Cjconf �t�@�C��
�ɋL�q����Ă��� -charconv �I�v�V�������폜���Ă���g�p���Ă��������D


4. Julius �N���X
=================

SampleApp �ł̓V���v���ȃN���X��`�ł��� "Julius.cpp" �� "Julius.h" ��
�g�p���Ă��܂��D������ Windows �̃��b�Z�[�W�`���� JuliusLib �̋@�\��
���p���邽�߂� "cJulius" �Ƃ������b�p�[�N���X���`���Ă��܂��D����͈�
���̂悤�ɃA�v���P�[�V�����ŗ��p���邱�Ƃ��ł��܂��D

-----------------------------------------------------------------
#include "Julius.h"

cJulius julius;

....

// Windows Procedure callback
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch( message ) {
	case WM_CREATE:
	    // start Julius when the main window is created
	    julius.initialize( "fast.jconf" );
	    julius.startProcess( hWnd );
	    break;
	case WM_JULIUS:
            // Julius events
	    switch( LOWORD( wParam ) ) {
		case JEVENT_AUDIO_READY: ...
		case JEVENT_RECOG_BEGIN: ...
		case JEVENT_RESULT_FINAL:....
	    }
	.....
    }
    ...
}
-----------------------------------------------------------------

�ڍׂ�SampleApp.cpp��Julius.cpp���������������D


5.  �\�[�X���̕����R�[�h�ɂ���
=================================

Julius �̃\�[�X�R�[�h�ł͓��{��̕����� EUC-JP �ŋL�q���Ă��܂��D������
���� MSVC++ �œǂ݂����ꍇ�CUTF-8 �֕ϊ����Ă��������D


6.  �X�V����
=============

2010/12 (ver.4.1.5.1)

	���C�Z���X�֌W�̏C��
	���[�h�~�[�̏C��
	�w�b�_�̏C��

2009/11 (ver.4.1.3)

	����
