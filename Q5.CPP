#include<iostream.h>
#include<conio.h>

	void sum(int n1,int n2)
	{
	int a;
	a=n1+n2;
	cout<<a;
	}
		void sum(int n1,int n2,int n3)
		{
		int a;
		a=n1+n2+n3;
		cout<<a;
		}
			void sum(int n1,float n2)
			{
			int a;
			a=n1+n2;
			cout<<a;
			}

	void main()
	{
	clrscr();
	float n1,n2;
	cout<<"enter numbers to get their sum:\n";
	cin>>n1>>n2;
	sum(n1,n2);
	getch();
	}

