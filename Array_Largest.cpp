#include<iostream>
using namespace std;
int main()
{
    int i,n,maximum;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maximum=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>maximum)
        {
            maximum=arr[i];
        }
    }
    cout<<"\nLargest element in array is: "<<maximum;
}
