#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

//int main()
//{
//	char* p = "abcdef";
//	//常量字符串，是不能改的
//	*p = 'W';
//	printf("%s\n", p);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcdef";
//	//前面加const即可
//	//*p = 'W';
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//内存空间不同
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
////打印为haha

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//内存空间不同
//	char* p1 = "abcdef";
//	char* p2 = "abcdef"; 
//
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
////打印为hehe

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d ", *(parr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
////打印结果
//1 2 3 4 5
//2 3 4 5 6
//3 4 5 6 7

//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//
//	int arr2[10] = { 0 };
//	int(*pa2)]10 = &arr2;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;//数组指针
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	return 0;
//}

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	return 0;

