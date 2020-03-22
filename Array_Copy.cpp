#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[10],b[10];
    cout<<"Enter element in array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Original array is: ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    cout<<"\nCopied array is : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
