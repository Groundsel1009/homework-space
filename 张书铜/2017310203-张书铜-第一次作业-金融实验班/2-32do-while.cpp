#include<iostream>
using namespace std;

int main()
{
	int m, n;
	m = 37;
	n = 0;
	do {
		cout << "���������µ�����";
		cin >> n;
		if (n > m)
			cout << "���´���"<<endl;
		else if (n < m)
			cout << "����С��"<<endl;
		else cout << "���¶���"<<endl;


	} while (n != m);
		return 0;
}