// ConsoleApplication5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "�㿼�Կ��˶��ٷ֣���0-100����";
	cin >> score;
	if (score >= 90 && score <= 100);
		cout << "��"<< endl;
	if (score >= 80 && score < 90);
			cout << "��"<< endl;
	if (score >= 60 && score < 80);
				cout << "��"<< endl;
				if (score >= 0 && score< 60);
				cout << "��"<< endl;
	return 0;
}

