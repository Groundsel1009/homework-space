//2-27��ҵ
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"�㿼�Կ��˶��ٷ֣���0~100��";
	cin>>x;
		switch(x){
			case ((90<=x)&&(x<=100)):
				cout<<"��"<<endl;
				break;	
			case ((80<=x)&&(x<90)):
				cout<<"��"<<endl;
				break;
			case ((60<=x)&&(x<80)):
				cout<<"��"<<endl;
				break;
			default:
				cout<<"��"<<endl;
				break; 
		}
		return 0;
		
} 
