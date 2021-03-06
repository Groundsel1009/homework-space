// 4-10.cpp
#include "pch.h"
#include <iostream>
using namespace std;

class date
{
public:
	date(){}
	date(int y, int m, int d);
	void set() {
		cin >> year >> month >> day;
	}
	void getd() {
		cout << year << "年" << month << "月" << day << "日";
	}
	~date() {};
private:
	int year;
	int month;
	int day;
};

date::date(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

class staff
{
public:
	staff(){}
	staff(int n, int id, int y, int m, int d, char g);
	staff(staff &s);
	void ininfo();
	void outinfo();
	~staff() {};
private:
	int number;
	char gender;
	int ID;
	date birthday;
};

staff::staff(int n, int id, int y, int m, int d, char g ='f'):birthday(y, m, d) 
{
	number = n;
	ID = id;
	gender = g;
}

staff::staff(staff &s) {
	number = s.number;
	ID = s.ID;
	gender = s.gender;
	birthday = s.birthday;
}

inline void staff::ininfo() {
	cout << "信息录入：" << endl;
	cout << "编号：";
	cin >> number;
	cout << "性别：";
	cin >> gender;
	cout << "出生日期：";
	birthday.set();
	cout << "身份证号：";
	cin >> ID;
	cout << endl;
}

inline void staff::outinfo() {
	cout << "编号：" << number << endl;
	cout << "性别：" << gender << endl;
	cout << "出生日期：";
	birthday.getd();
	cout << endl;
	cout << "身份证号：" << ID << endl;
}

int main()
{
	staff s1;
	s1.ininfo();
	s1.outinfo();
	return 0;
}