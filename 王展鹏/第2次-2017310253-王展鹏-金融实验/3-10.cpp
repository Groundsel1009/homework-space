#include <iostream>
using namespace std;

int fun1(int i,int j)//�������
{
	int k=(i>j)?j:i;
	while(i%k!=0||j%k!=0)
	{
		k--;
	}
	return k;
}

int fun2(int i,int j)//��С������
{
	int k=(i>j)?i:j;
	while(k%i!=0||k%j!=0)
	{
		k++;
	}
	return k;
}

int main ()
{
	int i,j,k,p;
	cout<<"������������"<<endl;
	cin>>i>>j;
	k=fun1(i,j);
	p=fun2(i,j);
	cout<<"�������Ϊ:"<<k<<endl;
	cout<<"��С������Ϊ:"<<p<<endl;

	system("pause");

}