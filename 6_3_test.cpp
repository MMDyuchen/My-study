#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

//int main()
//{
//	//дһ�δ���������ǵ�ǰ�������ֽ����Ǵ�˻���С��
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//
//	}
//	return 0;
//}

////�Ż�1
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//����1��С��
//	//����0�����
//	return *p;
//}
//int main()
//{
//	//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//	//����1��С��
//	//����0�����
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}
////�Ż�2 10��
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//	//����1��С��
//	//����0�����
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//���ʲô��
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//1000000000000000000000010000000
//	//1111111111111111111111101111111
//	//1111111111111111111111110000000 - ����
//	//10000000
//	//1111111111111111111111110000000 - bum
//	printf("%u\n",a);
//	//%d - ��ӡʮ���Ƶ��з�������
//	//%u - ��ӡʮ���Ƶ��޷�������
//	return 0;
//}
//

//int main()
//{
//	//����ѭ��
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

