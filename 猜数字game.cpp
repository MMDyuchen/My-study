#include <iostream>
#include <ctime>
#include<string>
using namespace std;

//猜数字小游戏
int main()
{
	//随机数
	srand((unsigned int)time(NULL));
	int i = rand() /100 ;
	int j = 0;
	cout << "请输入一个三位数：" << endl;
	cin >> j;
	label:
	if (j > i)
	{
		cout << "猜大了，再猜：" << endl;
		cin >> j;
		goto label;
	}
	else if (j < i)
	{
		cout << "猜小了，再猜：" << endl;
		cin >> j;
		goto label;
	}
	else
	{
		cout << "恭喜你，猜中了！" << endl;
		exit;
	}
	return 0;
}

