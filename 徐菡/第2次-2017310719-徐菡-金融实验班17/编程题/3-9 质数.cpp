// 3-9 ����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
bool PrimeORnot(int n)
{
	if (n = 2)
		return true;
	int k;
	for (k = 3; k<=n&&n%(k-1) != 0; k++)
	{
		if (k == n);
		return true;
	}
	return false;
}

int main()
{
	int n;
	cout << "������һ������: ";
	cin >> n;
	if (PrimeORnot(n))
		cout << "������" << endl;
	else cout << "��������" << endl;
    return PrimeORnot(n);
}

