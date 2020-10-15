#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

struct queue
{
float x;
queue*next;
}*front=NULL,*rear;

void insert(int);
void delnode();


void main()
{
	clrscr();
	int ch,a;

	do
	{
	cout<<"\n1.PUSH";
	cout<<"\n2.POP";
	cout<<"\n3.EXIT";
	cout<<"\n enter your choice:";
	cin>>ch;

	switch(ch)
	{

	case 1:cout<<"\nEnter number to insert:";
	       cin>>a;
	       insert(a);
	       break;
	case 2:delnode();
	       break;
	case 3:exit(0);
	 }
	 }while(ch!=3);
	 getch();
	 }


 void insert(int no)
{
queue*ptr;
ptr=new queue;

ptr->x=no;
ptr->next=NULL;


if(front==NULL)
{
rear=ptr;
front=ptr;
}

else
{
rear->next=ptr;
rear=ptr;
}
}

void delnode()
{
int p;
queue*ptr;

if(front==NULL)
{
cout<<"\nQueue is Underflow!!!\n";
return;
}

p=front->x;
ptr=front;
front=front->next;
delete ptr;
cout<<"\n\ndeleted node:"<<p<<"\n";
};

