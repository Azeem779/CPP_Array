#include<iostream>
using namespace std;
int main()
{
    int i,n,even=0,odd=0,arr[n];
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter element in array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
    }
    cout<<"\nSum of even number of element in array is: "<<even;
    cout<<"\nSum of odd number of element in array is: "<<odd;
}
