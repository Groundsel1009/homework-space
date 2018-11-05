// 3-10.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int maxfac(int x,int y);

int main()
{
	int x, y, m, n;
	cout << "请输入一个正整数：";
	cin >> x;
	cout << "请再输入一个正整数：";
	cin >> y;
	m = maxfac(x, y);
	n = x * y / m;
	cout << x << "和" << y << "的最大公约数是：" << m << endl;
	cout << x << "和" << y << "的最小公倍数是：" << n << endl;
	return 0;
}

int maxfac(int x, int y) {
	int z;
	if (x==y)
	{
		z = x;
	}
	else if (x<y)
	{
		z = x;
		while (y % z != 0 || x % z != 0)
		{
			z--;
		}
	}
	else
	{
		z = y;
		while (y % z != 0 || x % z != 0)
		{
			z--;
		}
	}return z;
}

