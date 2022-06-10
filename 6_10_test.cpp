#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>
//int main()
//{
//	int i = 014;
//	printf("%d\n", i);
//	return 0;
//	//结果是12，以0 为开头的整数常量，014被认为是8进制——以8为基底
//}
//
//int main()
//{
//	const float Revenue_Per_150 = 4.5;
//	short JanSold = 23500;
//	short FebSold = 19300;
//	short MaySold = 21600;
//	float RevQuarter = 0.0f;
//	short QuarterSold = JanSold + FebSold + MaySold;
//	printf("\nStock sold in \n Jan;%d \n Feb:%d\nMay:%d\n", JanSold, FebSold, MaySold);
//	printf("\ntotal stock sold in first quarter:%d", QuarterSold);
//	RevQuarter = QuarterSold / 150 * Revenue_Per_150;
//	printf("\nsales revenue this quarter is:$%.2f\n", RevQuarter);
//
//	return 0;
//}
//Stock sold in
//Jan; 23500
//Feb:19300
//May : 21600
//
//total stock sold in first quarter : -1136()输出值为负值，显然是不合理的，
// //原因是short类型最大为32767，此时的值已超过最大值，把short改为long即可
//sales revenue this quarter is : $ - 31.50

//int main()
//{
//	const float Revenue_Per_150 = 4.5;
//	short JanSold = 23500;
//	short FebSold = 19300;
//	short MaySold = 21600;
//	float RevQuarter = 0.0f;
//	long QuarterSold = JanSold + FebSold + MaySold;
//	printf("\nStock sold in \n Jan;%d \n Feb:%d\nMay:%d\n", JanSold, FebSold, MaySold);
//	printf("\ntotal stock sold in first quarter:%d", QuarterSold);
//	RevQuarter = QuarterSold / 150 * Revenue_Per_150;
//	printf("\nsales revenue this quarter is:$%.2f\n", RevQuarter);
//
//	return 0;
//}
//Stock sold in
//Jan; 23500
//Feb:19300
//May : 21600
//
//total stock sold in first quarter : 64400
// 此时结果为正值
//sales revenue this quarter is : $1930.50
//但结果应为1932，少了1.5，因为 QUARTERSold是一个整数，舍弃了0.333

//int main()
//{
//	const float Revenue_Per_150 = 4.5;
//	short JanSold = 23500;
//	short FebSold = 19300;
//	short MaySold = 21600;
//	float RevQuarter = 0.0f;
//	long QuarterSold = JanSold + FebSold + MaySold;
//	printf("\nStock sold in \n Jan;%d \n Feb:%d\nMay:%d\n", JanSold, FebSold, MaySold);
//	printf("\ntotal stock sold in first quarter:%d", QuarterSold);
//	RevQuarter = Revenue_Per_150 * QuarterSold / 150;//调整位置，先乘再除，避免整形出小数，否则会进行四舍五入
//	printf("\nsales revenue this quarter is:$%.2f\n", RevQuarter);
//
//	return 0;
//}
//此时输出为
//Stock sold in
//Jan; 23500
//Feb:19300
//May : 21600
//
//total stock sold in first quarter : 64400
//sales revenue this quarter is : $1932.00