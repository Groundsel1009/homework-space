#include<iostream>
#include<math.h>
using namespace std;
int pan(int i,int j);
void main(){
int i,j,x,y;
cout<<"������һ��������: ";
cin>>i;
cout<<"��������һ��������: ";
cin>>j;
x=pan(i,j);
y=i*j/x;
cout<<i<<"��"<<j<<"�����Լ���ǣ� "<<x<<endl;
cout<<i<<"��"<<j<<"����С�������ǣ�"<<y<<endl;
system("pause");
}
int pan(int i,int j){
int x;
if(i<j)
{
x=i;
i=j;
j=i;
}
while(j!=0){
x=i%j;
i=j;
j=x
}
return i;
}


