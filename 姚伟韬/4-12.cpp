#include <iostream>
using namespace std;
class datatype{
enum{
character,
integer,
floating_point
} vartype;
union
{
char c;
int i;
float f;
};
public:
datatype(char ch) {
vartype = character;
c = ch;
}
datatype(int ii) {
vartype = integer;
i = ii;
}
datatype(float ff) {
vartype = floating_point;
f = ff;
}
void print();
};
void datatype::print() {
switch (vartype) {
case character:
cout << "�ַ���: " << c << endl;
break;
case integer:
cout << "����: " << i << endl;
break;
case floating_point:
cout << "������: " << f << endl;
break;
}
}
void main() {
datatype A('c'), B(12), C(1.44F);
A.print();
B.print();
C.print();
}