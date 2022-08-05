#include<iostream>
#include<string>
using namespace std;

//×¢²áµÇÂ¼Ğ¡¹¦ÄÜ
//name age password
string name;//ĞÕÃû
short age = 0;//ÄêÁä
string password;//ÃÜÂë

void Text()
{
	//×¢²áĞÕÃû
	cout << "1.ÇëÊäÈëĞÕÃû" << endl;
	cin >> name;
	cout << "name=" << name << endl;
	//×¢²áÄêÁä
	cout << "2.ÇëÊäÈëÄêÁä" << endl;
	cin >> age;
	cout << "age=" << age << endl;
	//×¢²áÃÜÂë
	cout << "3.ÇëÊäÈëÃÜÂë" << endl;
	cin >> password;
	cout << "password=" << password << endl;


}

void login()
{
	string name1;
	cout << "ÇëÊäÈëĞÕÃû" << endl;
	cin >> name1;
	string password1;
	cout << "ÇëÊäÈëÃÜÂë" << endl;
	cin >> password1;


	if (name1 == name && password1 == password)
	{
		cout << "µÇÂ½³É¹¦" << endl;
		cout << "name=" << name1 << endl;
		cout << "age=" << age << endl;
		system("pause");
	}
	else
	{
		cout << "µÇÂ¼Ê§°Ü" << endl;
	}
}

void menu()
{
	cout << "*****************************" << endl;
	cout << "******1.×¢²á     2.µÇÂ¼******" << endl;
	cout << "*********  0.Exit  **********" << endl;
	cout << "*****************************" << endl;
	short i = 0;
	cin >> i;
	if (i == 1)
	{
		Text();
		login();
	}
	else if(i==2)
	{
		login();
	}
	else if(i==0)
	{
		exit;
	}
	else
	{
		cout << "ÇëÖØĞÂÊäÈë" << endl;
		menu();
	}

}
int main()
{
	menu();
	system("pause");
}