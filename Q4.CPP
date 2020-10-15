#include<iostream.h>
#include<conio.h>
#include<math.h>

struct complex
{
	float rel;
	float img;
}s1,s2;

void main()
{
clrscr();
	float a,b;
	cout<<"enter real and imaginary part of first complex no\n";
	cin>>s1.rel>>s1.img;
	cout<<"\nenter real and imaginary part of second complex no\n";
	cin>>s2.rel>>s2.img;

	a=s1.rel+s2.rel;
	b=s1.img+s2.img;
	cout<<"addition:\n"<<a<<"+"<<b<<"i\n";

	a=s1.rel-s2.rel;
	b=s1.img-s2.img;
	cout<<"subtraction:\n"<<a<<"+"<<b<<"i\n";


	a=s1.rel*s2.rel;
	b=s1.img*s2.img;
	cout<<"multiplication:\n"<<a<<"+"<<b<<"i\n";

	a=s1.rel/s2.rel;
	b=s1.img/s2.img;
	cout<<"division:\n"<<a<<"+"<<b<<"i";

getch();
}





