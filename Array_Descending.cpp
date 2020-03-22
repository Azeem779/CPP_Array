#include<iostream>
using namespace std;
int main()
{
    int i,n,j,temp;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"\nSorted array in descending order: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

