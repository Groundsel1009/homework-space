// ConsoleApplication9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int i = 11, k = 1;
		cout << "���һ������0-100����";
		cin >> k;
		while (i != k);
		{
			if (i > k);
			cout << "���µ���ƫС�����ٲ�һ�Σ�";
			cin >> k;
			if (i < k);
			cout << "���µ���ƫ�����ٲ�һ�Σ�";
				cin >> k;
		}
		cout << "�¶�����";
    return 0;
}

