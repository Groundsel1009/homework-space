#include<iostream>
using namespace std;
int getpower(int x, int y) {
	if (y <= 0) return 0;
	else if (y == 0) return 1;
	else if (y == 1) return x;
	else  return(x*getpower(x, y - 1));
}
double getpower(double x, double y) {
	if (y <= 0) return 0;
	else if (y == 0) return 1;
	else if (y == 1) return x;
	else  return(x*getpower(x, y - 1));
}
int main(){
	int inumber,power1;
	double dnumber,power2;
	cout << "����һ����������" << endl;
	cin >> inumber;
	cout << "����һ��ʵ������" << endl;
	cin >> dnumber;
	cout << "��������Ҫ������������ݵĴη���" << endl;
	cin >> power1;
	cout << "��������Ҫ�����ʵ�����ݵĴη���" << endl;
	cin >> power2;
	cout << inumber << "��" << power1 << "�η���" << getpower(inumber, power1) << endl;
	cout << dnumber << "��" << power2 << "�η���" << getpower(dnumber, power2) << endl;
	system("pause");
	return 0;

}

