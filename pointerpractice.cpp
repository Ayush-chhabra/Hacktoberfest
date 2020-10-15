#include<iostream>

using namespace std;

int main()
{
int a=10;
cout<<"a:"<<a<<endl;
int *p;
p=&a;
cout<<"p:"<<p<<endl;
int **q=&p;
cout<<"q:"<<q<<" *q:"<<*q<<" **q:"<<**q<<" &q:"<<&q;
return 0;
}
