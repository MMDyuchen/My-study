#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>
//void test(char* *p)
//{
//
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//ָ������Ҳ����
//
//	return 0;
//}
////���麯�� - ��ָ�������ָ��
////����ָ�� - ��ָ������ָ�� - ��ź�����ַ��ָ��
//

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int arr[10] = { 0 };
//	//int(*p)[10] = &arr;
//	//&arr;
//	//arr;
//	//printf("%d\n", Add(a, b));
//	// 
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	
//	int (*pa)(int,int) = Add;
//	printf("%d\n", (*pa)(2, 3));//��u����5
//	return 0;
//}
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}

//��C�����ȱ�ݡ�

//signal��һ����������
// //sinal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void

//void(*signal(int, void(*)(int)))(int);

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));//5
//
//	printf("%d\n", (*pa)(2, 3));//5
//	printf("%d\n", Add(2, 3));//5
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////����ָ�������
//int main()
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ��������ָ�������
//
//	int (*pa)(int, int) = Add;
//	int (*parr[4])(int x, int y) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5,-1,6,0
//	}
//	return 0;
//}

char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//2.дһ������ָ�����飬�ܹ����4��my_strcpy�����ĵ�ַ
char* (*pf)(char* ,const char*) = &my_strcpy;
char* (*pfArr[4])(char*, const char*) ={ my_strcpy[0],my_strcpy[1],my_strcpy[2],my_strcpy[3] }

//����ָ�������ʹ��