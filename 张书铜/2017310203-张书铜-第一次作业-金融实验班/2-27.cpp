#include<iostream>
using namespace std;

int main()
{
	int score;

	cout << "�㿼�˶��ٷ�";
	cin >> score;
	if (score > 100 || score < 0)
		cout << "����������0��100֮��" << endl;
	else if (score >= 90)
		cout << "��" << endl;
	else if (score >= 80)
		cout << "��" << endl;
	else if (score >= 60)
		cout << "��" << endl;
	else
		cout << "��" << endl;
	return 0;

}