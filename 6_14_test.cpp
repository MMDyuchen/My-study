#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

int main()
{
	//�ַ�ָ��
	char ch = 'w';
	char* p = &ch;
	char* p2 = "abcdef";
	//ָ������ - ���� - ���ָ�������
	int* arr[10];
	char* ch[5];
	//����ָ��
	//int * p3;//����ָ�� - ָ�����͵�ָ��
	//char* p4;//�ַ�ָ�� - ָ���ַ���
	int arrr2[5];//����
	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
	return 0;
}