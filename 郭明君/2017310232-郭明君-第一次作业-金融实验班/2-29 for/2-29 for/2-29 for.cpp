// 2-29 for.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int i, j, k, flag;
	for (i = 2; i <= 100; i++)
	{
		flag = 1;
		k= sqrt(i);
		for (j = 2; j <= k; j++)
		{
			if (i%j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag)
			cout << i << "������." << endl;
	}
    return 0;
}

