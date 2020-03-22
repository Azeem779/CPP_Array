#include<iostream>
using namespace std;
int main()
{
    int i,n,c=1;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n],freq[100];
    cout<<"Enter the element in the array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        freq[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        {
            freq[i]=c;
        }
    }

    cout<<"\nFrequency of all element in the array are: ";
    for(i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            cout<<"\n";
            cout<<arr[i]<<" occurs "<<freq[i]<<" times.";
            cout<<"\n";
        }
    }
}
