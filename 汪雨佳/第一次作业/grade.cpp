// grade.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int grade;
	cout << "你考试考了多少分？（0-100）\n" << endl;
	cin >> grade;

	if (grade >= 60)
		if (grade >= 80)
			if (grade >= 90)
				cout << "优" << endl;
			else
				cout << "良" << endl;
		else
			cout << "中" << endl;
	else
		cout << "差" << endl;
	return 0;
}