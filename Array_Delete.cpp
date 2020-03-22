#include<iostream>
using namespace std;
int main()
{
    int i,n,pos;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the index position where you want to delete value: ";
    cin>>pos;
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"After inserting  element the array is: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
