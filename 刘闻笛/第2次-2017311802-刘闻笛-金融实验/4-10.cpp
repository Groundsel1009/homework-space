// 4-10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Date
{private:
int year;
int month;
int day;
public:
	Date(){}//Ĭ�Ϲ���
	Date(int y,int m,int d)//���ι���
	{
		year = y;
		month = m;
		day = d;
	}
	void set()//�������ݺ���
	{
		cin >> year >> month >> day;
	}
	void display()//��ʾ����
	{
		cout << year << "��" << month << "��" << day << "��";
	}
};
class Person
{
private:
	int num;
	char sex;
	Date birthday;
	char ID;
public:
	Person(){}//Ĭ�Ϲ���
	Person(int n,int y,int m,int d,char id,char s='m'):birthday(y,m,d)
	{
		num = n;
		sex = s;
		ID=id;//��Ĭ��ֵ�Ĵ��ι���
		}
	Person(Person&p)//���ƹ���
	{
		num = p.num;
		sex = p.sex;
		birthday = p.birthday;
		ID=p.ID;
}
void input()//���뺯��
{
	cout << "¼�����ݣ�" << endl;
	cout << "��ţ�";
	cin >> num;
	cout << "�Ա�m/f����";
	cin >> sex;
	cout << "�������ڣ�";
	birthday.set();
	cout << endl;
	cout << "���֤�ţ�";
	cin >> ID;
	
	cout << endl;
}
void output()//�������
{
	cout << "��ţ�" << num << endl;
	cout << "�Ա�" << sex << endl;
	cout << "�������ڣ�";
	birthday.display();
	cout << endl;
	cout << "���֤�ţ�" << ID << endl;

}
~Person()//��������
{
	cout << "" << num << "����Ա�Ѿ�¼��" << endl;

}
};

int main()
{
	Person p1;
	p1.input();
	p1.output();

    return 0;
}

