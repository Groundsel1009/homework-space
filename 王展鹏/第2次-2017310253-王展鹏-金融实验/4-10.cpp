#include <iostream>
using namespace std;

class Date
{
public:
	Date(int x,int y,int z)  //���캯��
	{
		year=x;
		month=y;
		date=z;
	}
	Date(Date&p)             //���ƹ��캯��
	{
		year=p.year;
		month=p.month;
		date=p.date;
	}
	int getYear(){return year;}    //������Ա����
	int getMonth(){return month;}  //������Ա����
	int getDate(){return date;}    //������Ա����
	~Date(){}                //��������

private:
	int year,month,date;
};

class People
{
private:
	int num,id;
	char sex;
	Date p1;                                    //������

public:
	People(int num,int id,char sex,Date p);   //���캯��
	People(People & l);                       //���ƹ��캯��
	
	void show()                               //������Ա����������ʾ��Ա��Ϣ
	{
		cout<<"���Ϊ��"<<num<<endl;
		cout<<"�Ա�Ϊ��"<<sex<<endl;
		cout<<"���֤Ϊ��"<<id<<endl;
		cout<<"��������Ϊ��"<<p.getYear<<"��"<<p.getMonth<<"��"<<p.getDate<<"��"<<endl;
	}
};
//�����Ĺ��캯����ʵ��
	People::People(int num,int id,char sex,Date p):p1(p)
	{

	}

//�����ĸ��ƹ��캯����ʵ��
	People::People(People&l):p1(l.p1)
	{

	}