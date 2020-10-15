#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[100][100],r,c;
	cout<<"Enter number of rows: ";
	cin>>r;
	cout<<"Enter number of columns: ";
	cin>>c;
	cout<<"Enter the elements of the array:\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"\nTwo digit numbers in the array\n";
	for(i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if((arr[i][j]>9)&&(arr[i][j]<100))
			{
				cout<<arr[i][j]<<"\n";
			}
		}
	}
	getch();
}