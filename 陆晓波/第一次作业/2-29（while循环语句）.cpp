#include <iostream> //preprocessor directives

using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
//2-29.cpp(whileѭ�����)
int main()
{ cout << "1~100�������У�" ;
 int m = 0 , i = 1 , n = 1 ;
 while (n <= 100)
{ while (i < n){
    if (n % i == 0)
     m++ ;
     i++ ; }
     if (m == 1)
     {
         cout << n << " " ;
     }
     i = 1 ;
     m = 0 ;
     n++ ;
}
}
