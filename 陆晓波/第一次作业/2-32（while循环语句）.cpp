#include <iostream> //preprocessor directives
using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
//2-32.cpp(whileѭ�����)
int main(){
cout << "��������һ����������Ϸ�ɣ�" << endl ;
int x , n = 34 ;
cout << "���Ѿ������һ�����������������㿪ʼ�°ɣ�" << endl ;
cin >> x ;
while (x != n)
    {
        if (x < 1 || x > 100)
            cout << "���˸����㣬���������1~100����Ŷ��" << endl ;
        else if (x > n)
            cout << "���ˣ����ˣ�" << endl ;
        else cout << "����С�ˣ�С�ˣ�" << endl ;
        cin >> x ;
    }
    cout << "��ϲ�㣬�¶��ˣ�����Ӽ��ȣ���" << endl ;
    return 0 ;
}
