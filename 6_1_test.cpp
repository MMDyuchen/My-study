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
	//arr[12]��i�õ�ַ��ͬһ����ַ,���Ե�i++��12��ʱ����0��������ѭ��
	//&arr[12] 	=		-858993460	int
	//&i 	 	=		-858993460	int

//}
// ���Ż� 50
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
////ģ��strcpy�ַ�������
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//�Ż�1 60
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
////ģ��strcpy�ַ�������
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//�Ż�2 70
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
////ģ��strcpy�ַ�������
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////�Ż�3 80
//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
////ģ��strcpy�ַ�������
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

////�Ż�4 90
//  ��src���const������Ķ��� ����÷������ֱ�ӱ���
//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
////ģ��strcpy�ַ�������
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//�Ż�5
//��ʽ���ʣ�void��Ϊchar������ֵret
//#include<assert.h>
//char my_strcpy(char* dest,const char* src)
//{
// char* ret =dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
// return ret;
//}
////ģ��strcpy�ַ�������
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";

//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//my_strlen����ģ��
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
