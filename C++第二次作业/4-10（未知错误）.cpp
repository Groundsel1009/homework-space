#include <iostream> //preprocessor directives
using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
class DATE{
public:
    DATE(int x) ;
    DATE(const DATE &q) ;
    DATE () ;
private:
    int date ;
    };
    DATE::DATE(int x){
    date = x ;}
    DATE::DATE(const DATE &q){
    date = q.date ;}
class STAFF{
public:
    STAFF(int a , char b , DATE c , int d) ;
    STAFF (const STAFF &p) ;
    void inputInformation(int a , char b , DATE c , int d);
    void outputInformation();
    ~STAFF(){}
private:
    int serial_number , gender , ID_number ;
    DATE birthdate ;} ;
STAFF::STAFF(int a , char b , DATE c , int d){
       serial_number = a ;
        gender = b ;
        birthdate = c ;
        ID_number = d ;
}
STAFF::STAFF(const STAFF &p){
serial_number = p.serial_number ;
gender = p.gender ;
birthdate = p.birthdate ;
ID_number = p.ID_number ;
}
STAFF::inputInformation(int a , char b , DATE c , int d){
    serial_number = a ;
        gender = b ;
        birthdate = c ;
        ID_number = d ;
}
inline void STAFF::outputInformation(){
cout << "��ţ�" << serial_number << " " ;
cout << "�Ա�" << gender << " " ;
cout << "�������ڣ�" << birthdate << " " ;
cout << "���֤�ţ�" << ID_number << endl ;}
int main(){
STAFF m(0 , 'M', 0 , 0) ;
int x1 , x4 ;
char x2 ;
DATE x3 ;
cout << "��ֱ�����ó�Ա�ı�š��Ա�����ΪM,Ů��ΪF�����������ڣ�8λ���������գ������֤��" << endl ;
cin >> x1 >> x2 >> x3 >> x4 ;
m.inputInformation(x1 , x2 , x3 , x4) ;
cout << "���ĸ�����Ϣ���£�" << endl ;
m.outputInformation() ;
return 0 ;
}
