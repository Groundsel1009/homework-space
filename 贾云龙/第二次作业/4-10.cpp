#include<iostream>
using namespace std;
class Date {
public:
	unsigned long bornDate;
	Date();
	Date(unsigned long date) {
		bornDate = date;
	}
	Date(Date&d);
	~Date() {}
};
inline Date::Date(Date&d) {
	bornDate = d.bornDate;
}

class personnel {
public:
	unsigned long number;
	unsigned long idNumber;
	Date born;
	string gender;
	personnel() {
	}
	personnel(Date newd, unsigned long newN = 0, string newG = "", unsigned long newI = 0);
	//�����ĸ��ƹ��캯��(������Ա����)
	personnel(personnel&p) :born(p.born) {
		number = p.number;
		idNumber = p.idNumber;
		gender = p.gender;
		born = p.born;
	}
	//��Ϣ¼��
	void setnumber(unsigned long n) {
		number = n;
	}
	void setidNumber(unsigned long k) {
		idNumber = k;
	}
	void setGender(string s) {
		gender = s;
	}
	void setDate(unsigned long d) {
		born.bornDate = d;
	}

	//��Ϣ��ʾ
	unsigned long getNumber() {
		return number;
	}
	string getGenger() {
		return gender;
	}
	unsigned long getidNumber() {
		return idNumber;
	}
	unsigned long getBornDate() {
		return born.bornDate;
	}
	//��������������
	~personnel() {
		cout << "�����������ã��������н���" << endl;
	}
};
//���캯��������ʵ��
personnel::personnel(Date newd, unsigned long newN, string newG, unsigned long newI) :born(newd) {
	number = newN;
	gender = newG;
	idNumber = newI;
}
//���������Գ���
int main() {
	unsigned long i;
	unsigned long l;
	unsigned long o;
	string s;
	cout << "������" << endl;
	cin >> i;
	cout << "�����Ա�male or female" << endl;
	cin >> s;
	cout << "����������ڣ�����1998��3��16�ա���19980316��" << endl;
	cin >> l;
	cout << "�������֤�ţ�������500199803167654��" << endl;
	cin >> o;
	Date date(l);
	personnel p(date, i, s, o);
	cout << "���Ϊ" << p.getNumber() << endl;
	cout << "�Ա��� " << p.getGenger() << endl;
	cout << "��������Ϊ " << p.getBornDate() << endl;
	cout << "���֤���ǣ�" << p.getidNumber() << endl;
	return 0;
}