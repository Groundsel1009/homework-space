#include <iostream> //preprocessor directives

using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
//2-29.cpp(do...whileѭ�����)
int main()
{ cout << "1~100�������У�" ;
 int m = 0 , i = 1 , n = 2 ;
 do {
do
 {
    if (n % i == 0)
     m++ ;
     i++ ;
 }
     while (i < n) ;
     if (m == 1)
     {
         cout << n << " " ;
     }
     i = 1 ;
     m = 0 ;
     n++ ;}
 while (n <= 100) ;
}
