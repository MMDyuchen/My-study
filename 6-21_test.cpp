#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//ָ������
//	//int *arr[10];
//	//����ָ��
//	// int* (*pa)[10] =&arr;
//	//����ָ��
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1,2);
//	//int sum = pAdd(1, 2);
//	//printf("sum = %d\n", sum);
//	//����ָ�������
//	int(*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[5])(int, int) = &pArr;
//
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//һ��ð������
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { { "zhangsan",20 },{"lisi",30},{"wangwu",10} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//һ��ð������
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { { "zhangsan",20 },{"lisi",30},{"wangwu",10} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;

	void bubble_sort(int arr[], int sz)
	{
		int i = 0;
		//����
		for (i = 0; i < sz - 1; i++)
		{
			int j = 0;
			//һ��ð������
			for (j = 0; j < sz - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}

	struct Stu
	{
		char name[20];
		int age;
	};
	void qsort(void* bsae,
		size_t num,
		size_t width,
		int(*cmp)(const void* e1, const void* e2)
	);
	int main()
	{
		int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
		int sz = sizeof(arr) / sizeof(arr[0]);
		struct Stu s[3] = { { "zhangsan",20 },{"lisi",30},{"wangwu",10} };
		float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };

		int i = 0;
		for (i = 0; i < sz; i++)
		{
			printf("%d ", arr[i]);
		}

		return 0;
	}
	void bubble_sort(int arr[], int sz)
	{
		int i = 0;
		//����
		for (i = 0; i < sz - 1; i++)
		{
			int j = 0;
			//һ��ð������
			for (j = 0; j < sz - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
				}
			}
		}
	}

	struct Stu
	{
		char name[20];
		int age;
	};
	int main()
	{
		int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
		int sz = sizeof(arr) / sizeof(arr[0]);
		struct Stu s[3] = { { "zhangsan",20 },{"lisi",30},{"wangwu",10} };
		float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };

		int i = 0;
		for (i = 0; i < sz; i++)
		{
			printf("%d ", arr[i]);
		}

		return 0;