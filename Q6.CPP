#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	char str1[20],str2[30],str3[60];
	int ch,flag=0;
	cout<<"Select a string operation:-\n";
	cout<<"1. Find string length\n";
	cout<<"2. Compare two strings\n";
	cout<<"3. Concatenate two strings\n";
	cout<<"Enter the choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1:
		cout<<"\nEnter a string:";
		cin>>str1
		;
		int len = 0;
		while(str1[len]!='\0')
			len++;
		cout<<"\nThe length of the string is "<<len;
		break;

		case 2:
		cout<<"\nEnter first string:";
		cin>>str1;
		cout<<"\nEnter second string:";
		cin>>str2;
		int i=0 , flag = 1;	
		while(str1[i] != '\0')
		{
			if(str1[i] != str2[i])
			{	flag = 0;
			 	break;
			}
		}	
		if(flag)
		cout<<"\n Both the strings are equal";
		else
		cout<<"\nBoth the strings are not equal";


		break;

		case 3:
		cout<<"\nEnter first string:";

		cin>>str1;

		cout<<"\Enter second string:";

		cin>>str2;

		for(i=0;str1[i]!='\0';++i)
		str3[i]=str1[i];
		for(int j=0;str2[j]!='\0';++j)
		str3[i+j]=str2[j];


		str3[i+j]='\0';

		 cout<<str3;

		break;

		default:
		cout<<"Wrong choice!";
		break;
	}
getch();
}
