#include<iostream>
#include<string>
using namespace std;

//ע���¼С����
//name age password
string name;//����
short age = 0;//����
string password;//����

void Text()
{
	//ע������
	cout << "1.����������" << endl;
	cin >> name;
	cout << "name=" << name << endl;
	//ע������
	cout << "2.����������" << endl;
	cin >> age;
	cout << "age=" << age << endl;
	//ע������
	cout << "3.����������" << endl;
	cin >> password;
	cout << "password=" << password << endl;


}

void login()
{
	string name1;
	cout << "����������" << endl;
	cin >> name1;
	string password1;
	cout << "����������" << endl;
	cin >> password1;


	if (name1 == name && password1 == password)
	{
		cout << "��½�ɹ�" << endl;
		cout << "name=" << name1 << endl;
		cout << "age=" << age << endl;
		system("pause");
	}
	else
	{
		cout << "��¼ʧ��" << endl;
	}
}

void menu()
{
	cout << "*****************************" << endl;
	cout << "******1.ע��     2.��¼******" << endl;
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
		cout << "����������" << endl;
		menu();
	}

}
int main()
{
	menu();
	system("pause");
}