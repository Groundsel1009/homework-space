#include<iostream>
using namespace std;

int Fibonacci(int i) {
	if (i <= 2) { return (1); }
else{ return(Fibonacci(i - 1) + Fibonacci(i - 2)); }
	
}
int main() {
	int i;
	cout << "������һ��������" << endl;
	cin >> i;
    cout << "����Fibonacci������" << Fibonacci(i) << endl;
	system("pause");
	return 0;
		
}