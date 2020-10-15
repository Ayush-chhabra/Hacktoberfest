#include<iostream>

using namespace std;

class LowerTri
{
private:
int n;
int *A;

public:

LowerTri(int n)
{
this->n=n;
A=new int[(n*(n+1))/2];
for(int i=0;i<(n*(n+1))/2;i++)
{
    A[i]=0;
}
}

void set(int i,int j,int x);
int get(int i,int j);

~LowerTri()
{
    delete []A;
}
};
void LowerTri::set(int i,int j,int x)
{
   if(i>=j)
      A[(i*(i-1))/2+j-1]=x;
}

int LowerTri::get(int i,int j)
{

    if(i>=j)
      return A[(i*(i-1))/2+j-1];

    else
      return 0;
}


    int main()
{
	int n,ch,r,c,val;
	cout<<"Enter the dimensions of the matrix  : ";
    cin>>n;
    LowerTri * D = new LowerTri(n);
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
     		  
     		cout<<"Enter the element :  ";
     		cin>>val;
     		D->set(r,c,val);
     	}
     	else if (ch==2)
     	{

     		cout<<"Enter the row and column of the element:\n";
     		cin>>r>>c;

     		 
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

