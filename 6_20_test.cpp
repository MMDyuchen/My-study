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
//	printf("请输入两个操作数:>");
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
//		printf("请选择:>");
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
//			printf("退出\n");
//			break;
//		defult:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	//取出数组的地址
//
//	int (*pf)(int, int);//汉纳树指针
//	int (*pfArr[4])(int, int);
//	//pfArr是一个数组-函数指针的数组
// 
// ppfArr是一个指向【函数指针数组】的指针
//	int(*(*ppfArr)[4])(int,int)& pfArr;
//	//
//	//ppfArr是一个数组指针，指针指向的数组有四个元素
//	//指向数组的每个元素的类型是一个函数指针int(*)(int,int)
//	//
//	return 0;
//}
//qsort - 可以排序任意类型的数据
int main()
{
	//冒泡排序函数
	//冒泡排序函数之只能排序整形数组
	int arr[1, 3, 5, 7, 9, 2, 4, 6, 8, 0]
		int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	return 0;
}