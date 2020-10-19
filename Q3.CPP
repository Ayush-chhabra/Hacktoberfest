#include<stdio.h>
#include<conio.h>
struct electbill
{
	int custno;
	long int units;
	float bill;
}c[30],d[1];
int input()
{
	int k;
	char ch;
	for(int i=0;i<30;i++)
	{
		cout<<"\nEnter customer no: ";
		cin>>c[i].custno;
		cout<<"Enter no of units consumed: ";
		cin>>c[i].units;
			if(c[i].units<=100)
	c[i].bill=c[i].units*0.40;
		else if(c[i].units<=200)
		c[i].bill=100*0.40+(c[i].units-100)*0.50;
			else if(c[i].units<=300)
			c[i].bill=100*0.40+100*0.50+(c[i].units-200)*0.75;
				else if(c[i].units<=400)
				c[i].bill=100*0.40+100*0.50+100*0.75+(c[i].units-300)*1;
					else if(c[i].units<=1000)
					c[i].bill=100*0.40+100*0.50+100*0.75+100*1+(c[i].units-400)*1.50;

		cout<<"To enter more records press y: ";
		cin>>ch;
		if(ch=='y'||ch=='Y')
			continue;
		else
			k=i;
			break;
	}
	return k;
}
void output(int k)
{
	int i,j;
	for(i=0;i<k+1;i++)
	{
		for(j=0;j<k+1;j++)
		{
			if(c[i].custno<c[j].custno)
			{
				d[1]=c[i];
				c[i]=c[j];
				c[j]=d[1];
			}
		}
	}
	cout<<"\nCustomer Information:-";
	for(i=0;i<k+1;i++)
	{
		cout<<"\n\nCustomer No= "<<c[i].custno;
		cout<<"\nNo of units= "<<c[i].units;
		cout<<"\nBill= "<<c[i].bill;
	}
}
void main()
{
clrscr();
cout<<"Enter details of consumer:\n";
int b;
b=input();
output(b);
getch();
}
