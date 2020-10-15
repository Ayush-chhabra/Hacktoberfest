#include<iostream>

using namespace std;

class TriDiagonal
{
private:
	int n;
	int * A;
public:

TriDiagonal(int n)
{
this->n=n;
A=new int[3*n-2];
for(int i=0;i<3*n-2;i++)
{
    A[i]=0;
}
}

void set(int i,int j,int x);
int get(int i,int j);

~TriDiagonal()
{
    delete []A;
}
};
void TriDiagonal::set(int i,int j,int x)
{
   if(i-j==1)
      A[j-1]=x;

    else if(i==j)
      A[n-1+j-1]=x;

    else if(i-j==-1)
      A[n+n-1+j-2]=x;
}

int TriDiagonal::get(int i,int j)
{

    if(i-j==1)
      return A[j-1];
    else if(i==j)
      return A[n-1+j-1];

    else if(i-j==-1)
      return A[n+n-1+j-2];
   

    else
      return 0;
}


    int main()
{
	int n,ch,r,c,val;
	cout<<"Enter the dimensions of the matrix  : ";
    cin>>n;
    TriDiagonal * D = new TriDiagonal(n);
    do
     {
     	cout<<"\nMenu\n";
     	cout<<"1.Set\n";
     	cout<<"2.Get\n";
     	cout<<"3.Display\n";
     	cout<<"4.Exit\n";
     	cout<<"Enter the choice  :  ";
     	cin>>ch;
     	if (ch==1)
     	{

     		cout<<"Enter the row and column of the element:\n";
     		cin>>r>>c;
     		  if (r<1||c<1||r>n||c>n)
        {
				cout<<"Incorrect values given";
				continue;
        }
     		cout<<"Enter the element :  ";
     		cin>>val;
     		D->set(r,c,val);
     	}
     	else if (ch==2)
     	{

     		cout<<"Enter the row and column of the element:\n";
     		cin>>r>>c;
     		  if (r<1||c<1||r>n||c>n)
        {
				cout<<"Incorrect values given";
				continue;
        }
     		cout<<"The element is  :  "<<D->get(r,c);
     	}
     	else if (ch==3)
     	{
     		cout<<"The matrix is :-\n";
     		for(int i=1;i<=n;i++)
     		{
     			for(int j=1;j<=n;j++)
     				cout<<D->get(i,j)<<" ";
     			cout<<endl;
     		}
     	}
     	else if(ch==4)
     		break;
     	else
     		cout<<"Wrong input!!";

     } while (ch!=4);
}

