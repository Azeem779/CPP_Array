#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=0;
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
                c++;
            }
        }
    }
    cout<<"Total duplicate element in array are: "<<c;
}
