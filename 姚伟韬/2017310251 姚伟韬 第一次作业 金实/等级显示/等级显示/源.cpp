//�ȼ���ʾ.cpp
#include<iostream>
 using namespace std;
 int main(){
 cout<<"�㿼�Կ����ٷ֣���0-100��"<<endl;
 int grade;
 cin >>grade;
	if(grade>=0&&grade<60)
		 cout<<"��"<<endl;
	else if(grade>=60&&grade<80)
		 cout<<"��"<<endl;
	else if(grade>=80&&grade<90)		
		 cout<<"��"<<endl;
	else if(grade>=90&&grade<=100)	
		 cout<<"��"<<endl;
	else	
		 cout<<"��������ȷ�ķ���"<<endl;
			
	system("pause");
	return 0;
 
 }
