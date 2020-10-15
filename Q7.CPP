#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct
{
	char name[20];
	int marks;
}s[10],t[1];
void input()
{
	for(int i=0;i<10;i++)
	{
		cout<<"\nEnter student name: ";
		gets(s[i].name);
		cout<<"Enter marks: ";
		cin>>s[i].marks;
	}
}
void output()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(s[i].marks<s[j].marks)
			{
				t[0]=s[i];
				s[i]=s[j];
				s[j]=t[0];
			}
		}
	}
	cout<<"\nStudent Information";
	cout<<"\nHighest Marks= "<<s[9].marks;
	cout<<"\nName: ";
	puts(s[9].name);
	cout<<"\nLowest Marks= "<<s[0].marks;
	cout<<"\nName: ";
	puts(s[0].name);
}
void main()
{
	clrscr();
	cout<<"Enter details of students:-\n";
	input();
	output();
}