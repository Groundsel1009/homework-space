#include<iostream>
using namespace std;
int main() {
	int n = 1 + rand() % 100, a;
	cout << "������һ��1-100������" << endl;
	cin >> a;
	do {
		cout << "������һ����С������" << endl;
		cin >> a;
	} while (a > n);
	do {
		cout << "������һ�����������" << endl;
		cin >> a;
	} while (a < n);
	if (a = n) cout << "��ϲ�����¶��ˣ�" << endl;
	return 0;
}

