// 3-15˼��.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int getPower(int x, int y) {
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else if (y == 1)
		return x;
	else
		x = x*getPower(x, (y - 1));
	return x;
}

double getPower(double x, int y) {
	if (y == 0) {
		return 1;
	}
	else if (y == 1) {
		return x;
	}
	else if (y > 1) {
		x = x*getPower(x, (y - 1));
		return x;
	}
	else {
		y = -y;
		x = x*getPower(x, (y - 1));
		x = 1 / x;
		return x;
	}
}

int main()
{
	int a, m;
	double b;
	cout << "������һ������a��һ��ʵ��b��Ϊ����:" << endl;
	cin >> a >> b;
	double c =double(a);
	cout << "��������һ������m��Ϊָ�� ��" << endl;
	cin >> m;
	cout << "a��m�η�����";
	cout << getPower(c, m) << endl;
	cout << "b��m�η�����";
	cout << getPower(b, m) << endl;
	return 0;
}