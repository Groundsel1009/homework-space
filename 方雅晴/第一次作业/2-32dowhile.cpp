#include<iostream>
using namespace std;
int main()
{
	int a = 30, b = 0;
	do
	{
		cout << "�²�������Ƕ��٣�(1-100)��";
		cin >> b;
		if (a < b)
			cout << "��µ������������\n";
		else if (a>b)
			cout << "��µ����������С��\n";
		else
			cout << "��ϲ�㣡�¶��ˣ�\n";
	} while (a != b);
	system("pause");
	return 0;
}