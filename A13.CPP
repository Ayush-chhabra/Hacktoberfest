#include<fstream.h>
#include<conio.h>
#include<stdio.h>


class info
{
public:
char name[20];
char address[20];
int pno;

void add_record();
void display_record();

void input()
{
cout<<"\nenter name: ";
gets(name);
cout<<"enter address: ";
gets(address);
cout<<"enter phone no.";
cin>>pno;
}
void display()
{
cout<<"\n name:";
puts(name);
cout<<"\n address;";
puts(address);
}

int retpno()
{
return pno;
}
};

 void info::add_record()
	{
	info i;
	fstream fout;
	fout.open("info.dat",ios::out|ios::binary);
	i.input();
	fout.write((char*)&i,sizeof(i));
	fout.close();
	}
void info::display_record()
	{
	info i;
	int dno;
	cout<<"enter phone no. to display its record \n";
	cin>>dno;
	fstream fin;
	fin.open("info.dat",ios::in|ios::binary);
	while(fin.read((char*)&i,sizeof(i)))
	{
	if(i.retpno()==dno)
	i.display();
	else
	cout<<"*************** record does not exist *******************";

	}
	fin.close();
	}


void main()
{
clrscr();
int choice;

do
{
cout<<"\n1.append record";
cout<<"\n2.display record";
cout<<"\n3.exit";
cout<<"\nenter your choice: ";
cin>>choice;
switch(choice)
{
info i;
case 1: i.add_record();
	break;
case 2: i.display_record();
	break;
}
}while(choice!=3);

 getch();
 }

