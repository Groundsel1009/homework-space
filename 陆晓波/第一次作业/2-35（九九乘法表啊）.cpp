#include <iostream> //preprocessor directives
using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
//2-35.cpp(�žų˷���)
int main(){
for (int i = 1 ; i <= 9 ; i++)
{for (int m = 1 ; m <= i ; m++)
    cout << m << "*" << i << "=" << m*i << " ";
    cout << endl ;
}
return 0 ;
}
