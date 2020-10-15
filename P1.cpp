#include<iostream>



class oneD
{
private:
int *p;
int n;
public:
void Output(int arr[]);
void Input(int arr[]);
};

void oneD::Input(int arr[])
{
    p=arr;
    cout<<"Enter size of the Array"<<endl;
    cin>>n;
    cout<<"Enter elements of the Array"<<endl;
    for(int i=0;i<n;i++)
    {
    cin>>*(p+i);
    }
}


void oneD::Output(int arr[])
{
    for(int i=0;i<n;i++)
    {
    cout<<"Value of "<<i+1<<" element is "<<*(p+i)<<endl;
    }
}


int main()
{
    int arr[20];

    oneD obj;
    obj.Input(arr);
    obj.Output(arr);
    return 0;
}
