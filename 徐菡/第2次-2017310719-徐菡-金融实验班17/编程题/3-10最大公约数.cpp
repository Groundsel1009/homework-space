// 3-10���Լ��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iosream>
using namespace std;
int Diviser(int a, int b) {
	int c;
	if (a >= b)
		c = b;
	else c = a;
	for (int i = c; i >= 1; i--) {
		if (a%i == 0 && b%i == 0)
			return i;
	}
}
int Multiple(int a, int b) {
	int d;
	if (a >= b)
		c = a;
	else c = b;
	for (int k = c; k <= a*b; k++) {
		if (k%a == 0 && k%b == 0)
			return k;
	}
}

int main()
{
	cout << "������������: " << endl;
	cin >> a >> b;
	cout << "�������������Լ����";
	cout << Diviser(a, b);
	cout << "������������С��������";
	cout << Multiple(a, b);
	return 0;
}