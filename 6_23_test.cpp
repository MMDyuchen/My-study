#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>
struct Stu
{
	char name[20];
	int age;
};
//void qaort(void* bsae,
//			size_t num,
//			size_t width,
//			int(*cmp)(const void* e1, const void* e2)
//			);
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };

	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc=&a;
//	
//	//char ch = 'w';
//	void* p = &a;
//	//*p = 0;
//	//p++;
//	
//	//p = &ch;
//	//void*类型的指针 可以接收任意类型的地址
//	//void*类型的指针 不能进行解引用操作
//	//void*类型的指针 不能进行加减整数的操作
//
//	return 0;
//}