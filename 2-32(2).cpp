#include<iostream>
using namespace std;
int main() {
	int n = 1 + rand() % 100, a;
	cout << "������һ��1-100������" << endl;
	cin >> a;
	while (a > n) {
		cout << "������һ����С������" << endl;
		cin >> a;
	};
	while (a < n) {
		cout << "������һ�����������" << endl;
		cin >> a;
	};
	if (a = n) cout << "��ϲ�����¶��ˣ�" << endl;
	return 0;
}
