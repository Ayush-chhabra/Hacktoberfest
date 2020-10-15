#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<ctype.h>
#include<process.h>


void main()
{

clrscr();

int ch;
char word[100],choice,wordin[10],wordout[10],main='y';

ifstream fin;
ofstream fout;

do
{

cout<<endl<<"1. To create a text file"<<endl
    <<"2. Word starting with vowels"<<endl
    <<"3. Exit"<<endl<<endl
    <<" Enter choice : ";


cin>>ch;


switch(ch)
{

case 1 :
	 fout.open("text.txt");

	 do
	 {
	   cout<<endl<<"Enter line : ";

	   cin.get();

	   cin.getline(word,100,'\n');

	   fout<<word<<"\n";

	   cout<<endl<<"Do you want to add more line (y/n) : ";
	   cin>>choice;

	   }while(tolower(choice)=='y');

	   fout.close();

	   break;

case 2 :

	  fin.open("text.txt");
	  fout.open("text2.txt");

	  while(!fin.eof())
	  {

	  fin>>word;

	  char x=tolower(word[0]);

	            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	            fout<<word<<" ";
	  }
	    fin.close();
	    fout.close();

	  fin.open("text2.txt");

	  cout<<endl;

	  cout<<"The words stored in files are : ";

	  while(!fin.eof())
	  {
	     fin>>word;
	     cout<<word<<" ";
	   }
	   cout<<endl;
	  fin.close();
	 break;
 case 3 : exit(0);

 default : cerr<<"Error";
	   exit(0);

     }

     cout<<endl<< "Do you want to do more (y/n) : ";
     cin>>main;

 }while(tolower(main)=='y');

   getch();  }
