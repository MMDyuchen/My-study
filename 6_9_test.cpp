#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr);
//	printf("%d\n", sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}
//
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

int main()
{
	char* p = "abcdef";//"abcdef"是常量字符串
	//printf("%c\n", *p);
	//把首字符的地址放到了*p里
	printf("%s\n", p);
	return 0;
}