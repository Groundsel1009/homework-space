#include<iostream>
using namespace std;
int main() {
	int n = 1 + rand() % 100, a;
	cout << "������һ��1-100������" << endl;
	cin >> a;
	for (a; a != n; cin >> a)
	{
		if (a > n) cout << "������һ����С������";
		else cout << "������һ�����������";
	}
	cout << "��ϲ�����¶��ˣ�" << endl;
	return 0;
}
