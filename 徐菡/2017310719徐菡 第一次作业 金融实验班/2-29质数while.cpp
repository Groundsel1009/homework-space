// ConsoleApplication6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main() {
	int i = 2, k = 2;
	while (i <= 100);
	{
		while (i%k != 0 && i >= k);
		{
			if (i == k);
			cout << i << "������" << " ";
			k++;
		}
		i++, k = 2;
	}
    return 0;
}

