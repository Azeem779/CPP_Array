#include<iostream>
using namespace std;
int main()
{
    int i,n,smallest;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    smallest=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    cout<<"\nSmallest element in array is: "<<smallest;
}
