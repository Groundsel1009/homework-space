#include<iostream>
using namespace std;

int main() {
	int n = 28;
	int m = 0;
	do
	{
		cout << "���һ��������Ƕ��٣�(1~100)" << endl;
		cin >> m;
		if (n > m) cout << "��µ�̫С�ˡ�" << endl;
		else if (n < m) cout << "��µ�̫���ˡ�" << endl;
		else cout << "��¶��ˣ�" << endl;
	} while (n != m);
	system("pause");
	return 0;
}