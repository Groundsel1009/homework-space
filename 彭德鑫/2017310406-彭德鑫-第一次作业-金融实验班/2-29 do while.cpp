//2-29 while 
#include<iostream>
using namespace std;
int main(){
	cout<<"�����жϣ�1��������������ѭ����2��ʼ����"<<endl; 
	int x=2,y=x;
	do{
		do	
			y--;
			while (x%y!=0);
		if (y==1)
			cout<<x<<" ";
			x++;
			y=x-1;
		}while(x<101);
}
