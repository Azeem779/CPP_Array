#include<iostream>
using namespace std;
int main()
{
    int i,n,pos,val;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the position where you want to enter value: ";
    cin>>pos;
    cout<<"\nEnter the value you want to insert: ";
    cin>>val;
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=val;
    cout<<"After inserting  element the array is: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
