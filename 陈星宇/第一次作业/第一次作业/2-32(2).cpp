# include < iostream>
using namespace std;

int main() {
	int n = 18, m = 0;
	do {
		cout << ��������Ƕ��٣���0~100����;
		cin >> m;
		if (n > m)
			cout << ��̫С���� << endl;
		else if (n < m)
			cout << ��̫������ << endl;
		else
			cout << ��bingo!�� << endl;
	} while (n != m);
	return 0;
}