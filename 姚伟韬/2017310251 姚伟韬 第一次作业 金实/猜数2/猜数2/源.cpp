//����.cpp
#include<iostream>
using namespace std;
int main(){
	int x=45,y;
	do{
	cin>>y;
	if (x!=y)
		if(x>y)   cout<<"���С��"<<endl;
		else      cout<<"��´���"<<endl;
	else  cout<<"�ش���ȷ"<<endl;
	} while(x!=y)
system("pause");
return 0;
}
