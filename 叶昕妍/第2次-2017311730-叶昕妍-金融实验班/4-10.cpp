#include<iostream>
using namespace std;
class Date {
public:
	   Date(int y = 0, int m = 0, int d = 0) { year = y; month = m; day = d; }
	   int gety() { return year; }
	   int getm() { return month; }
	   int getd() { return day; }
	   void output1() { cout<<"��������:" << year<<"��"  <<month<< "��" << day<< "��" << endl; }
private:int year, month, day;
};
class Person {
private:int number; char sex; Date birthday; int ID;
public:Person(int n, char s, Date b, int id) {
	number = n; sex = s; birthday = b; ID = id;
}
	   Person() {}
	   Person(Person&p) { number = p.number; sex = p.sex;ID = p.ID; }

	  inline void output() {
		   cout << "��ţ�" << number << endl;
		   cout << "�Ա�" << sex << endl;
		   cout << "���֤�ţ�" << ID << endl;
		   birthday.output1();
	   }
	   ~Person() {}
};
int main() {
	Date ibirthday(2000, 11, 28);
	Person Bob(2017311999,'F', ibirthday, 1234567890);
	cout << "����Ա��Ϣ�ǣ�"<<endl;
	Bob.output();
	cout << "�������Ա�ΪF��ʾŮ��M��ʾ�У�" << endl;
	system("pause");
	return 0;
}