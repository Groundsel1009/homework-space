// 3-13.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int Fib(int n) {
	int m;
	if (n==1 || n==2)
	{
		m = 1;
	}
	else
	{
		m = Fib(n - 1) + Fib(n - 2);
	}return m;
}

int main()
{
	int n;
	cout << "请输入一个正整数：";
	cin >> n;
	cout << "Fibonacci级数的值为：" << Fib(n);
	return 0;
}