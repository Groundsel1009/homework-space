#include<iostream>
using namespace std;
int fib(int n)
{
return(n>2)?fib(n-1)+fib(n-2):1;
}
int mian(){
int a;
cout<<"������������";
cin>>a;
cout<<endl<<"���Ϊ��"<<fib(a)<<endl<<endl;
system("pause");
}