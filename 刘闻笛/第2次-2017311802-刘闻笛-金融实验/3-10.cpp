// 3-10.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
using namespace std;
int fn1(int a, int b);

int main()
{
	int a,b,x,y;
	cout << "������һ��������"<<endl;
	cin >> a;
	cout << "��������һ��������"  << endl;
	cin >> b;
	x= fn1(a, b);
	y = a*b / x;
	cout << "���ǵ����Լ��Ϊ" << x << endl;
	cout << "���ǵ���󹫱���Ϊ" << y << endl;
    return 0;
}
int fn1(int a, int b)
{int temp; if (a < b)
{
	temp = a;
	a = b;
	b = a;
}
while (b != 0)
{
	temp = a%b;
	a = b;
	b = temp;
}
return a;
}