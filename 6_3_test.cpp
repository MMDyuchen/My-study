#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是大端还是小端
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//
//	}
//	return 0;
//}

////优化1
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//返回1，小端
//	//返回0，大端
//	return *p;
//}
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
////优化2 10分
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//输出什么？
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	char a = -128;
//	//1000000000000000000000010000000
//	//1111111111111111111111101111111
//	//1111111111111111111111110000000 - 补码
//	//10000000
//	//1111111111111111111111110000000 - bum
//	printf("%u\n",a);
//	//%d - 打印十进制的有符号数字
//	//%u - 打印十进制的无符号数字
//	return 0;
//}
//

//int main()
//{
//	//无限循环
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

