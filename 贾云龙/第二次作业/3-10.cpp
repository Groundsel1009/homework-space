#include<iostream>
#include<cmath>
using namespace std;
int fn(int i, int j);//�����Լ��

int main() {
	int i, j, s, t;
	cout << "������һ��������:";
	cin >> i;
	cout << "������һ����һ��������";
	cin >> j;
	s = fn(i, j);
	t = i*j / s;
	cout << i << "��" << j << "�����Լ���ǣ�" << s << endl;
	cout << i << "��" << j << "����С�������ǣ�" << t << endl;
	return 0;

}
int fn(int i, int j)
{
	int m;
	if (i < j) {
		m = i;
		i = j;
		j = m;
	}
	while (j != 0) {
		m = i%j;
		i = j;
		j = m;
	}return i;
}