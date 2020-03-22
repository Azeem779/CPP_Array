#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,sub=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n],arr1[n];
    cout<<"Enter element in first array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element in second array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<n;i++)
    {
        sum=arr[i]+arr1[i];
    }
    for(i=0;i<n;i++)
    {
        sub=arr[i]-arr1[i];
    }
    cout<<"\nSum is "<<sum;
    cout<<"\nSubtraction is "<<sub;
}
