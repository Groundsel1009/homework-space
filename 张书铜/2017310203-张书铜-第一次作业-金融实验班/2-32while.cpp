#include<iostream>
using namespace std;

int main() 
{
	int n, m;
	n = 37;
	m = 0;
	while (n != m)
	{
		cout << "��������²������";
		cin >> m;
			if (m > n)
				cout << "���µô���" << endl;
			else if(m<n)
				cout << "���µ�С��" << endl;
			else cout << "���¶���" << endl;

	}
	return 0;
}