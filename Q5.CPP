#include<iostream.h>
#include<conio.h>

	float sum(float n1,float n2,float n3 = 0,float n4 = 0,float n5 = 0)
	{
	folat sum;
	sum=n1+n2+n3+n4+n5;
	retunr(sum);
	}
		
	void main()
	{
	clrscr();
	float n1,n2,n3,s;
	cout<<"enter numbers to get their sum:\n";
	cin>>n1>>n2>>n3;
	s = sum(n1,n2);
		cout<<"s";
	getch();
	}

