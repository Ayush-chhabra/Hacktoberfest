#include<iostream>

using namespace std;

class twoD
{
private:
int m,n;
public:
void Output(int arr[20][20]);
void Input(int arr[20][20]);
};

void twoD::Input(int arr[20][20])
{
    cout<<"Enter no. of Rows: ";
    cin>>m;
    cout<<"Enter no. of Columns: ";
    cin>>n;
    cout<<"Enter elements of the Array: "<<endl;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>*(*(arr+i)+j);
        }
    }
}


void twoD::Output(int arr[20][20])
{
    cout<<endl;
    for(int i=0;i<m;i++)
    {   cout<<endl;
        for(int j=0;j<n;j++)
        cout<<*(*(arr+i)+j);

    }
}


int main()
{
    int arr[20][20];
    cout<<endl<<"For 2D Array"<<endl;
    twoD obj;
    obj.Input(arr);
    obj.Output(arr);
    return 0;
}
