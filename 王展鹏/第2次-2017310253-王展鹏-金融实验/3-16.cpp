#include <iostream>
using namespace std;

int getPower(int x,int y)
{   int i=1,k=1;
	if (y<=0)
		cout<<"0"<<endl;
	else
       while(i<=y)
	{
		k=k*x;
		i++;
	}
	   return k;
}

double getPower(double x,int y)
{   int i=1,k=1;
	{
	if (y<=0)
		cout<<"0"<<endl;
	else
       while(i<=y)
	{
		k=k*x;
		i++; 
	}
	}
	      return k;
}

int main()
{   
	int a,m;
	double b;
	cout<<"��������������"<<endl;
	cin>>a>>b;
	cout<<"������ָ��"<<endl;
	cin>>m;

	cout<<"a^m�Ľ��Ϊ��"<<getPower(a,m)<<endl;
	cout<<"b^m�Ľ��Ϊ��"<<getPower(b,m)<<endl;

	system("pause");
}