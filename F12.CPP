#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<fstream.h>
void main()
{
 clrscr();
   int ch;
   char x;
   char ch1;
   fstream f1;
     char a[20],b[20];
     do
     {
     cout<<"\n1. Create a file";
     cout<<"\n2. Display uppercase and lowercase vowels and consonants\n";
     cout<<"3.Exit\n";
     cin>>ch;
     switch(ch)
     {
     case 1:
      f1.open("q8.txt",ios::out);
      cout<<"enter the string:";
      gets(b);
      f1<<b;
      f1.close();
      break;
     case 2:
      f1.open("q8.txt",ios::in);
      f1.getline(a,30);
      f1.close();
      for(int i=0;i<strlen(a);i++)
      {
	if(isalpha(a[i]))
	{
		x=a[i];
		if(islower(a[i]))
		{
		if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
			cout<<"\n Lowercase vowel:"<<a[i];
		else
			cout<<"\n Lowercase CONSONANT:"<<a[i];
		}
		if(isupper(a[i]))
		{
		if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
		cout<<"\n\tUppercase vowel:"<<a[i];
		else
		cout<<"\n\tUppercase CONSONANT:"<<a[i];
		}
	}
    }
    break;
     case 3: exit(0);
	     break;
  default:cout<<"wrong choice";
  break;
  }
  cout<<"\n Do you want to continue(y/n)";
  cin>>ch1;
  }
  while(ch1=='y'||ch1=='Y');
  getch();
  }
