#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

//void menu()
//{
//	printf("*************************\n");
//	printf("******1.Add    2.Sub*****\n");
//	printf("******3.Mul    4.Div*****\n");
//	printf("*******   0.exit      ***\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf_s("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		defult:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	//ȡ������ĵ�ַ
//
//	int (*pf)(int, int);//������ָ��
//	int (*pfArr[4])(int, int);
//	//pfArr��һ������-����ָ�������
// 
// ppfArr��һ��ָ�򡾺���ָ�����顿��ָ��
//	int(*(*ppfArr)[4])(int,int)& pfArr;
//	//
//	//ppfArr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
//	//ָ�������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
//	//
//	return 0;
//}
//qsort - ���������������͵�����
int main()
{
	//ð��������
	//ð��������ֻ֮��������������
	int arr[1, 3, 5, 7, 9, 2, 4, 6, 8, 0]
		int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}