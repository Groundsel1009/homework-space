// 2-32 while.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int n = 18;
	int m = 0;
	while (m != n)
	{
		cout << "�²��������ֵΪ���٣�(0~100)��";
		cin >> m;
		if (n > m)
			cout << "��µ�̫С�ˣ�" << endl;
		else if (n < m)
			cout << "��µ�̫���ˣ�" << endl;
		else
			cout << "��¶��ˣ�" << endl;
	}
    return 0;
}

