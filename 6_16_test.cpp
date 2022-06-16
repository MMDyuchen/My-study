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
//	test(arr);//指针数组也可以
//
//	return 0;
//}
////数组函数 - 是指向数组的指针
////函数指针 - 是指向函数的指针 - 存放函数地址的指针
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
//	//&函数名 和 函数名 都是函数的地址
//	
//	int (*pa)(int,int) = Add;
//	printf("%d\n", (*pa)(2, 3));//姐u共是5
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

//《C陷阱和缺陷》

//signal是一个函数声明
// //sinal函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int，返回类型是void

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
////函数指针的数组
//int main()
//{
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址，即函数指针的数组
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
//1.写一个函数指针pf，能够指向my_strcpy
//2.写一个函数指针数组，能够存放4个my_strcpy函数的地址
char* (*pf)(char* ,const char*) = &my_strcpy;
char* (*pfArr[4])(char*, const char*) ={ my_strcpy[0],my_strcpy[1],my_strcpy[2],my_strcpy[3] }

//函数指针数组的使用