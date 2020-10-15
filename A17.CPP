#include<iostream.h>
#include<conio.h>

class node
{ public:
	int rollno,age;
	node * next;
 node()
 {
	 rollno = 0;
	 age = 0;
	 next = NULL;
 }	 
};

class stack
{
node*top;

public:
stack()
{
top=NULL;
}
void push();
void pop();
void display();
};


void stack::push()
{
node * Newnode=new node();
cout<<"Enter a rollno :";
cin>>Newnode->rollno;
cout<<"\nEnter age :";
cin>>Newnode->age;
top=Newnode;
cout<<"\nNew rollno and age are inserted\n";
}
void stack::pop()
{
node * temp;
if(top==NULL)
	cout<<"\nThe stack is empty\n";
else
{
	temp=top;
	top=top-> next;
	cout<<"\nThe value poped is \n";
	cout<<"Roll no"<<temp->rollno<<endl;
	cout<<"Age"<<temp->age<<endl;
	delete(temp) ;
}
}
void stack::display()
{
 node * ptr;
if(top==NULL)
	cout<<"\nLinked list underflow\n";
else
{	cout<<"\nThe contents of stack\n";
	ptr=top;
	while(ptr!=NULL)
{	cout<<"Roll no "<<ptr->rollno<<endl;
	cout<<"Age"<<ptr->age<<endl;
	ptr=ptr->next;
}
}
}
void main()
{	clrscr();
	stack s;
	int choice;
	do
	{
	cout<<"\n*************************** Stack Implementation *************************";
	cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit\n";
	cout<<"\nEnter your choice :";
	cin>>choice;
	switch(choice)
	{	case 1: s.push();
		break;

		case 2:s.pop();
		break;

		case 3:s.display();
		break;

	}
	}while(choice!=4);
	getch();

}

