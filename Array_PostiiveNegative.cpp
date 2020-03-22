#include<iostream>
using namespace std;
int main()
{
    int i,n,pos=0,neg=0,arr[n];
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter element in array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    cout<<"\nPositive number of element in array is: "<<pos;
    cout<<"\nNegative number of element in array is: "<<neg;
}
