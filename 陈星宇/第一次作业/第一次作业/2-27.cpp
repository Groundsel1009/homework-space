#include<iostream>
using namespace std;

int main() {
	int i, score;
	cout << ���㿼�Կ��˶��ٷ֣���0~100������;
	cin >> score;
	if (score > 100 || score < 0)
		cout << ����Ч�����롱;
	else {
		i = score / 10;
		switch (i) {
		case 10:
		case 9: cout << ���š�; break;
		case 8: cout << ������; break;
		case 7:
		case 6: cout << ���С�; break;
		default: cout << ���; break;
		}
	}
	return 0;
}