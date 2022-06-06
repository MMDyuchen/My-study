#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i <= 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}
//char字符范围在-128~127，故长度为255


//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
//死循环，unsigned char范围为0~255，故会一直死循环


//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	//n的值为9
//	printf("*pFloat的值为：%f\n", *pFloat);
//	//*pFloat的值为0.000000
//	*pFloat = 9.0;
//	printf("num的值为：%d\n", n);
//	//num的值为1091567616
//	printf("*pFloat的值为：%f\n", *pFloat);
//	//*pFloat的值为9.000000
//	return 0;
//}

