#include<iostream>
#include<cmath>
using namespace std;
int prime(int n);

int main() {
	int n;
	cout << "������һ������:";
	cin >> n;
	if (prime(n))
		cout << n << "������" << endl;
	else
		cout << n << "��������" << endl;
	system("pause");
	return 0;

}int prime(int n) {
	int i, k,j;
	j = 1;
	k = sqrt(n);
	for (i = 2; i <= k; i++) {
		if (n%i == 0) {
			j = 0;
			break;
		}
	}return j;

}