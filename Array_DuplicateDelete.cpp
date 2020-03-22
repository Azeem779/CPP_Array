#include<iostream>
using namespace std;
int main()
{
    int i,n,j,k;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element in array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
             for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<"\nAfter delete duplicate element, array is: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
