#include<iostream.h>
#include<ctype.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<process.h>

class student
{ public :

 char name[9];
 int rollno;
 int marks;


 void input();
 void display();

}s1,s2;

void student::input()
{
  cout<<endl<<"Enter student details-> ";

cout<<endl<<"Enter name : ";
cin>>s1.name;

cout<<"Enter rollno : ";
cin>>s1.rollno;

cout<<"Enter marks : ";
cin>>s1.marks;

}

void stream()
{
  int n=s1.marks;

 if(n>=96)
 cout<<endl<<"Computer Science";

 else if(n>=91&&n<=95)
 cout<<endl<<"Electronics";

 else if(n>=86&&n<=90)
 cout<<endl<<"Mechanical";

 else if(n>=81&&n<=85)
 cout<<endl<<"Electrical";

 else if(n>=76&&n<=80)
 cout<<endl<<"Chemical";

 else if(n>=71&&n<=75)
 cout<<endl<<"Civil";

 else
 cout<<endl<<"NO stream available";
 }

void student::display()
{
   ofstream fout;

   fout.open("student.txt");

   if(!fout)
   {
   cout<<"File cant be opened ";

   }

   fout.write((char*)&s1,sizeof(student));

   fout.close();

   ifstream fin;

   fin.open("student.txt");
   fin.read((char*)&s2,sizeof(student));

   cout<<"Name : "<<s2.name<<endl;
   cout<<"Roll no : "<<s2.rollno<<"\t";
   cout<<"Marks : "<<s2.marks<<endl;

   fin.close();

 }
void main()
{

 clrscr();

 int ch;

 char choice='y';

 do
 {

 cout<<"1. Create a file"<<endl
     <<"2. Print stream"<<endl
     <<"3. Exit"<<endl<<endl
     <<"Your choice :";

 cin>>ch;

 switch(ch)
 {
 case 1 :  s1.input();
	   s1.display();
	   break;

 case 2 : stream();
	   break;

 case 3 : exit(0);


 default : cerr<<endl<<"Error";
	   exit(0);
 }
  cout<<endl<<"Do you want to add more or want to print their stream (y/n) : ";
  cin>>choice;
}while(tolower(choice)=='y');
 getch();
 }
