# include <iostream>
using namespace std;

int main() {
	int n = 19, m = 0;
	while (m != n) {
		cout << ��������Ƕ��٣���0~100����;
		cin >> m;
		if (n > m)
			cout << ��̫С���� << endl;
		else if (n < m)
			cout << ��̫������ << endl;
		else
			cout << ��bingo!�� << endl;
	}
	return 0;
}