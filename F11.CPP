
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
     clrscr();
     char ch[70];
     ofstream fout;
     fout.open("count.txt",ios::in);
     {
       cout<<"Enter Data: ";
       cin.getline(ch,70);
       fout<<ch;
     }
    fout.close();
    int c=1,n=0,w=1;
    ifstream fin;
    fin.open("count.txt",ios::out);
     {
       fin.getline(ch,70);
       for(int i=0;ch[i]!='\0';i++)
	{
	  if(isdigit(ch[i]))
	   { ++n;}

	  else if(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'
	  ||ch[i]=='i'||ch[i]=='I'||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U')
	   { ++c; }
	  else if(ch[i]==' ')
	   {
	     ++w;
	   }

	 }
       cout<<"\nNo. of words: "<<w
	   <<"\nNo. of Vowels: "<<c
	   <<"\nNo of Numbers: "<<n;
      fin.close();
}
    ofstream nile;
    nile.open("counter.txt",ios::out);
    {
     for(int i=0;ch[i]!='\0';i++)
      { if(ch[i]==' ')
	{
		ch[i]='#';
	}
	nile<<ch[i];
      }
     nile.close();
    }
    getch();
   }
