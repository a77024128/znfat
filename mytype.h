#ifndef _MYTYPE_H_
#define _MYTYPE_H_

/*�������������������������
  �����ϵ�znFAT--Ƕ��ʽFAT32�ļ�ϵͳ�����ʵ�֡�
   һ��[���²�]�Ѿ��ɱ�����������ʽ���淢�С�
   ��������������3���ʱ��Ǳ�ı��������ֽ�������Ψ
   һһ�׽���FAT32�ļ�ϵͳ��SD����Ƕ��ʽ�洢������
   ר�������л������˴����ı�̼��������ϵĿ������顣
   ���ڸ�����������ƽ̨������znFAT�������ɹ���
   ��ȫ���������Ҳ���ۡ�
   ���ϵ�ZN-X�����壬֧��51��AVR��STM32(M0/M3/M4)��
   CPU���˰���������ף����ϸ��־��ʵ�ʵ��ʵ������� 
                 ������վwww.znmcu.cn
  �������������������������*/

/*============================================================================================
  ���ļ����ڽ����������͵����¶��壬�밴��ʵ��ʹ�õ�Ӳ��ƽ̨�ϵ��������ͶԺ�������¶���
=============================================================================================*/

//�����������ͷ�ļ� ����AVR GCC�е� ROM������<AVR/pgmspace.h>�ж���

#define UINT8   unsigned char
#define UINT16  unsigned short
#define UINT32  unsigned int 

#define INT8    char 
#define INT16   short
#define INT32   int

#define ROM_TYPE_UINT8   const unsigned char
#define ROM_TYPE_UINT16  const unsigned short
#define ROM_TYPE_UINT32  const unsigned int

#endif
