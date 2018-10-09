#include<iostream>
#include<string>
using namespace std;

class Date {
public:
	Date(string inputDay = "2000.1.1", int number = 1) {
		day = inputDay;
	};
	string showDate() {
		return day;
	}
private:
	int number;
	string day;
};

class Person {
public:
	Person(int inputNumber = 1) {          //���캯��
		number = inputNumber;
	};  
	Person(Person &a) {                    //���ƹ��캯��
	};   
	~Person() {                             //��������
	};                                     
	void showData();         //��ʾ����
	void setSex(string inputSex) {
		sex = inputSex;
	}
	void setBirth(Date inputBirth) {
		birth = inputBirth;
	}
	void setID(string inputID) {
		ID = inputID;
	}
	
private:
	int number;
	string sex;
	Date birth;
	string ID;
};



void Person::showData() {
	cout << "Number:" << number << endl;
	cout << "Sex:" << sex << endl;
	cout << "Date of Birth:" << birth.showDate() << endl;
	cout << "ID:" << ID;
}

int main() {
	Person example(2);
	example.setBirth(Date ());
	example.setID("523545200001013258");
	example.setSex("Female");
	example.showData();
	system("pause");
	return 0;

}