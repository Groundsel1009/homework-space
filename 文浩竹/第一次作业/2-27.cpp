#include<iostream>
using namespace std;
int main() {
	cout << "�㿼�Կ��˶��ٷ֣���0~100��" << endl;
	int score;
	cin >> score;
	if (score >= 90 && score <= 100)
		cout << "��" << endl;
	else if (score < 90 && score >= 80)
		cout << "��" << endl;
	else if (score < 80 && score >= 60)
		cout << "��" << endl;
	else if (score < 60 && score >= 0)
		cout << "��" << endl;
	else
		cout << "wrong input" << endl;
	system("pause");
	return 0;
}