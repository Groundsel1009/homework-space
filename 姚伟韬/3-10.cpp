#include <iostream>
#include <math.h>
using namespace std;
int pan(int i,int j); 
void main()
{
int i,j,x,y;
cout << "������һ���������� ";
cin >> i ;
cout << "��������һ���������� ";
cin >> j ;
x = fn1(i,j);
y = i * j / x;
cout << i << "��" << j << "�����Լ���ǣ� " << x << endl;
cout << i << "��" << j << "����С�������ǣ� " << y << endl;
system("pause");
}
int pan(int i, int j)
{
int temp;
if (i < j)
{
temp = i;
i = j;
j = i;
}
while(j != 0)
{
temp = i % j;
i = j;
j = temp;
}
return i;
}