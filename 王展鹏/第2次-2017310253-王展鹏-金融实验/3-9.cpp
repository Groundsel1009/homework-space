#include <iostream>
using namespace std;

int fun1(int i)
{   int k=1;
	for(int j=2;j<i;j++)
	{   
		if (i%j==0)
			k=0;
	}
	return k;
}

int main ()
{
	int i;
	cout<<"������һ������"<<endl;
	cin>>i;
	{   if(fun1(i))
		cout<<"�����������"<<endl;
	    else
	    cout<<"�������������"<<endl;
	  
	}
	  system("pause");
}
