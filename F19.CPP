#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

struct queue
{
int eno;
float salary;
queue*field;
}*front=NULL,*rear;

void insert(int,float);
void delnode();


void main()
{
	clrscr();
	int ch,a,sal;

	do
	{
	cout<<"\n\n1.PUSH";
	cout<<"\n2.POP";
	cout<<"\n3.EXIT";
	cout<<"\n enter your choice:";
	cin>>ch;

	switch(ch)
	{

	case 1:cout<<"\nEnter employ number to insert:";
	       cin>>a;
	       cout<<"\nEnter employ salary to insert:";
	       cin>>sal;
	       insert(a,sal);
	       break;
	case 2:delnode();
	       break;
	case 3:exit(0);
	 }
	 }while(ch!=3);
	 getch();
	 }


 void insert(int no,float sal)
{
queue*ptr;
ptr=new queue;

ptr->eno=no;
ptr->salary=sal;
ptr->field=NULL;


if(front==NULL)
{
rear=ptr;
front=ptr;
}

else
{
rear->field=ptr;
rear=ptr;
}
}

void delnode()
{
int p,q;
queue*ptr;

if(front==NULL)
{
cout<<"\nQueue is Underflow!!!\n";
return;
}
p=front->eno;
q=front->salary;
ptr=front;
front=front->field;
delete ptr;
cout<<"\n\n\t\t*****DELETED NODE*****\n";
cout<<"\nEmployee no:"<<p;
cout<<"\nEmployee salary:"<<q;

};

