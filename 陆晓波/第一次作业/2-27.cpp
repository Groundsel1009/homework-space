#include <iostream> //preprocessor directives

using namespace std;
//using namespace ʹ�������ռ�
//std : standard library ��׼�����
//2-27.cpp
int main()
{ cout << "�㿼�Կ��˶��ٷ֣���0~100��" << endl ;
  int n ;
  cin >> n ;
  for ( n ; n < 0 || n > 100 ; cin >> n )
  cout << "��������Ч���ݣ�" << endl ;
  cout << "��ĵȼ�Ϊ��" ;
  if (n < 60)
   cout << "��" << endl ;
   else if (n < 80)
   cout << "��" << endl ;
   else if (n < 90)
   cout << "��" << endl ;
   else cout << "��" << endl ;
  return 0 ;


}
