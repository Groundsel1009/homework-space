
#include<iostream>

using namespace std;

int main() {

	int num = 54;

	cout << "������һ��1~100�����֣�" << endl;

	int guessNum = 0;

	cin >> guessNum;



	while (guessNum != num) {

		cout << "���ٴ�����һ��1~100��ֵ��" << endl;

		cin >> guessNum;

	}

	cout << "��ϲ��¶���";

	system("pause");

	return 0;

}