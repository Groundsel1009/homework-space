// 6-22.cpp
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void reverse(string &s)
{
	static int i = 0;
	int	len = s.length();
	char a;
	if (i >= s.length() / 2)
		return;
	a = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = a;
	i++;
	reverse(s);
}

int main()
{
	string s;
	cout << "请输入一串字符：" << endl;
	getline(cin, s);
	reverse(s);
	cout << s << endl;
	return 0;
}
