#include<iostream>
using namespace std;

int main() {
	int mark;
	cout << "�㿼�˶��ٷ֣���0-100��" << endl;
	cin >> mark;
	int i;
		i= mark/10;
		switch (i) {
		case 10: cout << "��" << endl; break;
		case 9: cout << "��" << endl; break;
		case 8: cout << "��" << endl; break;
		case 7: cout << "��"<< endl; break;
		default:cout << "�� "<< endl; break;
		}
		system("pause");
			return 0; }
