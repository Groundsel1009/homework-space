#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "�㿼�Կ��˶��ٷ֣���0-100����";
	cin >> a;
	if (a > 100 || a < 0)
		cout << "������0-100" << endl;
	else if (90 <= a)
		cout << "��" << endl;
	else if (80 <= a)
		cout << "��" << endl;
	else if (60 <= a)
		cout << "��" << endl;
	else
		cout << "��" << endl;
	system("pause");
	return 0;
}