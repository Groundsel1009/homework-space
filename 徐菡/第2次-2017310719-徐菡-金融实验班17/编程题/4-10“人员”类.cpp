// 4-10����Ա����.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Date {
public:
	Date(int Year1=1999, int Month1=11, int Day1=11) {
		Year = Year1;
		Month = Month1;
		Day = Day1;
	}
	void Set() {
		cin >> Year >> Month >> Day;
	}
		
	void Show() {
		cout << Year << "��" <<  Month << "��" << Day<< "��"  << endl;
	}
private:
	int Year, Month, Day;
};


class People {
public:
	People() {}
	People(int Number1, char Gender1, int Year1, int Month1, int Day1, int ID1):Birthday(Year1,Month1,Day1) {
		Number = Number1;
		Gender = Gender1;
		ID = ID1;
	}
	void Set() {
		cout << "���������ı�ţ�";
		cin >> Number;
		cout << "�����������Ա�";
		cin >> Gender;
		cout << "���������ĳ������ڣ�";
		Birthday.Set();
		cout << "�������������֤�ţ�";
		cin >> ID;
	}
	void Show();
	~People() {}
private:
	int Number, ID;
	char Gender;
	Date Birthday;
};


void People::Show(){
	cout << "��ţ�" << Number <<endl<< "�Ա�" << Gender <<endl<< "���֤�ţ�" << ID<<endl;
	cout << "��������";
	Birthday.Show();
}


int main(){
	People XH;
	XH.Set();
	XH.Show();
	return 0;
}