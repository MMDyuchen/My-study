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
//	//�����12����0 Ϊ��ͷ������������014����Ϊ��8���ơ�����8Ϊ����
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
//total stock sold in first quarter : -1136()���ֵΪ��ֵ����Ȼ�ǲ�����ģ�
// //ԭ����short�������Ϊ32767����ʱ��ֵ�ѳ������ֵ����short��Ϊlong����
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
// ��ʱ���Ϊ��ֵ
//sales revenue this quarter is : $1930.50
//�����ӦΪ1932������1.5����Ϊ QUARTERSold��һ��������������0.333

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
//	RevQuarter = Revenue_Per_150 * QuarterSold / 150;//����λ�ã��ȳ��ٳ����������γ�С��������������������
//	printf("\nsales revenue this quarter is:$%.2f\n", RevQuarter);
//
//	return 0;
//}
//��ʱ���Ϊ
//Stock sold in
//Jan; 23500
//Feb:19300
//May : 21600
//
//total stock sold in first quarter : 64400
//sales revenue this quarter is : $1932.00