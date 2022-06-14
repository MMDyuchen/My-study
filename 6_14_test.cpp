#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

int main()
{
	//字符指针
	char ch = 'w';
	char* p = &ch;
	char* p2 = "abcdef";
	//指针数组 - 数组 - 存放指针的数组
	int* arr[10];
	char* ch[5];
	//数组指针
	//int * p3;//整形指针 - 指向整型的指针
	//char* p4;//字符指针 - 指向字符的
	int arrr2[5];//数组
	int(*pa)[5] = &arr2;//取出数组的地址，pa就是一个数组指针
	return 0;
}