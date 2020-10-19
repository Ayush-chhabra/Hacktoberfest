#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<string.h>


struct node
{
	int no ;
	char name[20];
	node*next;
}start*;


	void Push_end(int,char);
	void display ();

void Push_end(int pno,char pname[20])
{
	node*ptr;
	node *Newnode=new node;
	if(Newnode==NULL)
		cout<<"Cant Create Node";
	else
	{
		Newnode->no=pno;
		strcpy(Newnode->name,pname);

		Newnode->next=NULL;
		if(start==NULL)
			start=Newnode;
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=Newnode;
		}
	}
 }

void display()
{
	node*ptr;
	if(start==NULL)
	cout<<"*****Linkedlist underflow*****";
	else
	{
		ptr=start;
		while(ptr!=NULL)
		{
		cout<<"\nPatient number:"<<ptr->no;
		cout<<"\nPatient name:"<<ptr->name;
		ptr=ptr->next;
		}

	}
}

void main()
{
clrscr();
	int ch,a;
	char pname[20];

	do
	{
	cout<<"\n\n1.Addition of new patients";
	cout<<"\n2.Updated List";
	cout<<"\n3.Exit";
	cout<<"\n\n\tEnter choice:";
	cin>>ch;

	switch(ch)
	{

	case 1:cout<<"\nEnter patient number to insert:";
	       cin>>a;
	       cout<<"\nEnter patient name to insert:";
	       cin>>pname;
	       Push_end(a,pname);
	       break;
	case 2:display();
	       break;
	case 3:exit(0);
	 }
	 }while(ch!=3);
	 getch();
	 }
