#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
	//arr[12]和i得地址是同一个地址,所以当i++到12得时候变成0，陷入死循环
	//&arr[12] 	=		-858993460	int
	//&i 	 	=		-858993460	int

//}
// 无优化 50
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//'\0'
//}
////模拟strcpy字符串拷贝
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//优化1 60
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
////模拟strcpy字符串拷贝
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//优化2 70
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//
//}
////模拟strcpy字符串拷贝
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////优化3 80
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
////模拟strcpy字符串拷贝
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////优化4 90
//  把src变成const不允许改动， 如果用法出错会直接报错
//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
////模拟strcpy字符串拷贝
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//优化5
//链式访问，void变为char，返回值ret
//#include<assert.h>
//char my_strcpy(char* dest,const char* src)
//{
// char* ret =dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
// return ret;
//}
////模拟strcpy字符串拷贝
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";

//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//my_strlen函数模拟
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
