#include<iostream>
using namespace std;
int main()
{
    int i,n,value,flag=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the value you want to search: ";
    cin>>value;
    for(i=0;i<n;i++)
    {
        if(value==arr[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Value "<<value <<" found at position "<<i+1;
    }
    else
        cout<<"Value "<<value<<" is not found.";
}
