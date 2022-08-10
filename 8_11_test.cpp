#include<iostream>
#include<ctime>
#include<string>
using namespace std;

void game1()
{
	srand((unsigned int)time(NULL));
	int i = rand() / 100;
	int j = 0;
	cout << "请输入一个三位数：" << endl;
	while (true)
	{
		cin >> j;
		if (i > j)
		{
			cout << "猜小了，再猜" << endl;
		}
		else if (i < j)
		{
			cout << "猜大了，再猜" << endl;
		}
		else
		{
			cout << "恭喜你，猜对了！" << endl;
			break;
		}
	}
}
void welldepth()
{
	int i = 0;
	int j = 0;
	for (j = 0; i <= 10; j++)
	{
		i += 3;
		if (i >= 10)
		{
			cout << j << endl;
			break;
		}
		i -= 1;
	}
}
void flower()
{
	int i = 100;
	for (i = 100; i < 999; i++)
	{
		int x = i / 100;
		int y = (i / 10) % 10;
		int z = i % 100;
		if (i == x * x * x + y * y * y + z * z * z)
		{
			cout << i << endl;
		}
	}
}
void panduan3()
{
	int i = 0;
	cout << "请输入一个整数" << endl;
	cin >> i;
	if (i % 2 == 0)
	{
		cout << "Your input is even" << endl;
	}
	else
	{
		cout << "Your input is odd" << endl;
	}
}
void age()
{
	int i = 0;
	cout << "请输入您的年龄" << endl;
	cin >> i;
	if (i > 10 && i < 18 || i > 25 && i < 30)
	{
		cout << "可以访问" << endl;
	}
	else
	{
		cout << "拒绝访问" << endl;
	}
}
void zifu()
{
	int i = 0;
	cin >> i;
	int j = 0;
	for (j = 0; j < 10; j++)
	{
		if (i == j)
		{
			cout << "您输入的是一个数字" << endl;
			return;
		}
	}
	cout << "您输入的不是一个数字" << endl;
}
void grade()
{
	int grade[3] = { };
	cout << "请输入你的三门成绩" << endl;
	cout << "请输入你的语文成绩" << endl;
	cin >> grade[0];
	cout << "请输入你的数学成绩" << endl;
	cin >> grade[1];
	cout << "请输入你的英语成绩" << endl;
	cin >> grade[2];
	if (grade[0] > 70 && grade[1] > 80 && grade[2] > 90 || grade[0] == 100 || grade[1] == 100 || grade[2] == 100 || grade[0] > 90 && grade[1] > 70 || grade[0] > 90 && grade[2] > 70)
	{
		cout << "非常棒，继续加油" << endl;
	}
}
void Arr()
{
	int arr1[] = { 5621,4564,54545,169,2514,124,458,13 };
	int i = 0;
	for (i = 0; i <= 7; i++)
	{
		if (arr1[i] % 13 == 0)
		{
			cout << arr1[i] << endl;
		}
	}
}
void sushu()
{
	int i = 0;
	int j = 0;

	for (i =1;i<100;i++)
	{
		if (i == 2)
		{
			cout << i << " ";
		}
		if (i > 2)
		{
			for (j = 2; j <= i-1; j++)
			{
				if (i % j == 0)
				{
					break;
				}	
			}
			if (j == i)
			{
				cout << i << " ";
			}
		}
	}
}
void number()
{
	int i = 0;
	int j = 0;
	for (i = 500; i < 1000; i++)
	{
		if (i % 6 == 0)
		{
			j = j + i;
		}
	}
	cout << j << endl;
}
void number2()
{
	int i = 531220;
	cout << i / 100000 << " ";
	cout << (i / 10000)%10 << " ";
	cout << (i / 1000) % 10 << " ";
	cout << (i / 100) % 10 << " ";
	cout << (i / 10) % 10 << " ";
	cout << i % 10 << " ";
}

int main()
{
	number2();
}