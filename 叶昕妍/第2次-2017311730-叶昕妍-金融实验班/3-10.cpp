#include<iostream>
using namespace std;

int gongyueshu(int a, int b){
	int i;
	if (a < b) { i = a; a = b; b = i; }
	while (b != 0) { i = a%b; a = b; b = i; }
	return a;

}
int main() {
	int a, b, m, n;
	cout << "������һ��������" << endl;
	cin >> a;
	cout << "��������һ��������" << endl;
	cin >> b;
	m = gongyueshu(a, b);
	n = a*b / m;
	cout << a << "��" << b << "�����Լ����" << m << endl;
	cout << a << "��" << b << "����С��������" << n << endl;
	system("pause");
	return 0;
}
