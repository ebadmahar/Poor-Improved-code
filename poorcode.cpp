#include <iostream>
using namespace std;

struct S
{
string n;
int a;
};

int main()
{
int x;
cout << "Enter number of students: ";
cin >> x;
S s[x];
for(int i=0;i<x;i++)
{
cout << "Name: ";
cin >> s[i].n;
cout << "Age: ";
cin >> s[i].a;
}
for(int i=0;i<x;i++)
{
cout << s[i].n << " " << s[i].a << endl;
}
return 0;
}