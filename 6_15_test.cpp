#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

////void test(int arr[3][5])
////{}
////void test1(int arr[][5])
////{}
////错误写法
////void test2(int arr[3][])
////{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	//test(arr);//二维数组传参
//	//test1(arr);
//	//test2(arr);
//	test3(arr);
//	return 0;
//}

void print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", *(p + i);
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9, };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);
	return 0;
}
