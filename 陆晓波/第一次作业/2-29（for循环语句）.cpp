#include <iostream> //preprocessor directives

using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
//2-29.cpp(forѭ�����)
int main()
{ cout << "1~100�������У�" ;
 int m = 0 , i = 1 , n = 1 ;
 for (n ; n <= 100 ; n++)
 {for (i ; i < n ; i++)
{
    if (n % i == 0)
     m++ ;
}
     if (m == 1)
     {
         cout << n << " " ;
     }
     i = 1 ;
     m = 0 ;
     }
}
