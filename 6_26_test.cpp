#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>


int main()
{
	//memsetʹ���滻
#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>
	int main()
	{
		char  arr[] = { "hello world" };
		memset(arr, '*', 5);
		printf("%s\n", arr);
		return 0;
	}
	�����ĵ�
		zh.cppreference.com
		cplusplus.com

		//������********************
		void  Swap(int x, int y)
	{
		int tmp = 0;
		tmp = x;
		x = y;
		y = tmp;
	}
	int main()
	{
		int a = 10;
		int b = 20;
		printf("a =%d, b = %d\n", a, b);
		Swap(a, b);
		printf("a =%d, b = %d\n", a, b);
		return 0;
	}

	//ok����ֵ����
#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>

	void  Swap2(int* pa, int* pb)
	{
		int tmp = 0;
		tmp = *pa;
		*pa = *pb;
		*pb = tmp;
	}
	int main()
	{
		int a = 10;
		int b = 20;
		printf("a =%d, b = %d\n", a, b);
		Swap2(&a, &b);
		printf("a =%d, b = %d\n", a, b);
		return 0;
	}

	//���Զ��庯����100~200���ڵ�����
#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>


	int is_prime(int n)
	{
		int j = 0;
		for (j = 2; j < n; j++)
		{
			if (n % j == 0)
				return 0;
		}
		return 1;
	}
	int main()
	{
		int i = 0;
		for (i = 100; i <= 200; i++)
		{
			if (is_prime(i) == 1)
				printf("%d ", i);
		}
		return 0;
	}

	//math����
#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>
#include<math.h>

	int is_prime(int n)
	{
		int j = 0;
		for (j = 2; j <= sqrt(n); j++)
		{
			if (n % j == 0)
				return 0;
		}
		return 1;
	}
	int main()
	{
		int i = 0;
		for (i = 100; i <= 200; i++)
		{
			if (is_prime(i) == 1)
				printf("%d ", i);
		}
		return 0;
	}

	//��is_leap_year�ж�1000-2000����
#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>
#include<math.h>

	int is_leap_year(int y)
	{
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
			return 1;
		else
			return 0;
	}
	int main()
	{
		int year = 0;
		for (year = 1000; year <= 2000; year++)
		{
			if (1 == is_leap_year(year))
			{
				printf("%d ", year);
			}
		}
		return 0;
	}



	//���ַ�������ʵ��
#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>
#include<math.h>

	int binary_search(int arr[], int k, int sz)
	{
		int left = 0;
		int right = sz - 1;


		while (left <= right)//һ��Ҫ�еȺţ������ʼ�����ҵ���ͬ ʱ�ͻ�����ѭ��
		{
			int mid = (left + right) / 2;
			//�������������ѭ���ÿѭ��һ����Ҫ���¼���mid
			if (arr[mid] > k)
				right = mid - 1;
			else if (arr[mid] < k)
				left = mid + 1;
			else if (arr[mid] = k)
				return 0;
		}
		return -1;
	}
	int main()
	{
		int n = 7;
		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		int sz = sizeof(arr) / sizeof(arr[0]);
		int ret = binary_search(arr, n, sz);
		if (ret == 0)
		{
			printf("Got it!");
		}
		else
		{
			printf("Gettn't!");
		}
		return 0;
	}


#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>
#include<math.h>

	void Add(int* p)
	{
		(*p)++;
	}
	int main()
	{
		int num = 0;
		Add(&num);
		printf("num = %d\n", num);
		Add(&num);
		printf("num = %d\n", num);
		Add(&num);
		printf("num = %d\n", num);
		return 0;
	}

	//Ƕ��
#include<stdio.h>
	void new_line()
	{
		printf("hehe\n");
	}
	void three_line()
	{
		int i = 0;
		for (i = 0; i < 3; i++)
		{
			new_line();
		}
	}
	int main()
	{
		three_line();
		return 0;
	}

	//��ʽ
	int main()
	{
		int len = 0;
		printf("%d\n", strlen("abc"));
		return 0;
	}


	//��ӡ4321
#include<stdio.h>
	int main()
	{
		printf("%d", printf("%d", printf("%d", 43)));
		return 0;
	}

	void print(int n)
	{
		if (n > 9)
		{
			print(n / 10);
		}
		printf("%d ", n % 10);
	}

	int main()
	{
		unsigned int num = 0;
		scanf("%d", &num);
		print(num);
		return 0;
	}

	int my_strlen(char* str)
	{
		int count = 0;
		while (*str != '\0')
		{
			count++;
			str++;
		}
		return count;
	}

	int main()
	{
		char arr[] = "bit";
		int len = my_strlen(arr);
		printf("len = %d\n", len);
		return 0;
	}

#define _CRT_SECURE_NO_WARMINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include <stdlib.h>
#include<math.h>

	int my_strlen(char* str)
	{
		if (*str != 0)
			return 1 + my_strlen(str + 1);
		else
			return 0;
	}

	int main()
	{
		char arr[] = "bit";
		int len = my_strlen(arr);
		printf("len = %d\n", len);
		return 0;
	}
	return 0;
}