//2-32 do while
#include<iostream>
using namespace std;
int main(){
	int x=0,y;
	cout<<"��������һ��������Ϸ��������һ��0~100�����֣��һ������С�б�ֱ����¶ԣ�������϶���Ӯ��"<<endl;
	cin>>y;
	do{
	if(x<y)
	cout<<"��������"<<endl;
	if(x>y)
	cout<<"����С��"<<endl;
	cin>>y;
	}
	while(x!=y);
	if(x==y)
	cout<<"��¶��ˣ��������� zero is all beginning."<<endl;
}
