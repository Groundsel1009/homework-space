#include <iostream>
using namespace std;

int f(int n)
{   int k=1;
	if(n==1||n==2)
	  k==1;
	else 
	  k=f(n-1)+f(n-2);
	return k;
}

int main()
{   
	int n;
	cout<<"�����뼶��n"<<endl;
	cin>>n;
	cout<<"���Ϊ��"<<f(n)<<endl;

	system("pause");
}