#include <iostream>
using namespace std;
int main()
{
  const int m=66;
  int n;
  while (m!=n)
  {
  cout<<"���һ��һ��1-100����"<<endl;
  cin>>n;
  if (n>m)
	  cout<<"��µ������̫����"<<endl;
  else if (n<m)
	  cout<<"��µ������̫С��"<<endl;
  else 
	  cout<<"��ϲ���¶�����"<<endl;
  }
}
