#include<iostream>
using namespace std;
void PrintArray(int a[],int Size);
int main()
{
    int i,n,pos_count=0,neg_count=0,arr[n],pos[10],neg[10];
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
            pos[pos_count]=arr[i];
            pos_count++;
        }
        else
        {
            neg[neg_count]=arr[i];
            neg_count++;
        }
    }
    cout<<"\nPositive element in array is: "<<pos_count;
    cout<<"\nPositive element in array are: ";
    for(i=0;i<pos_count;i++)
    {
        cout<<pos[i]<<" ";
    }
    cout<<"\nNegative element in array is: "<<neg_count;
    cout<<"\nNegative element in array are: ";
    for(i=0;i<neg_count;i++)
    {
        cout<<neg[i]<<" ";
    }
}
 /*cout<<"\n Total Number of Positive Numbers in this Array = "<<pos_count;
 cout<<"\n Array Elements in Positive Array  :  ";
 PrintArray(pos, pos_count);

 cout<<"\n Total Number of Negative Numbers in this Array = "<<neg_count;
 cout<<"\n Array Elements in Negative Array  : ";
 PrintArray(neg, neg_count);
 return 0;
}

void PrintArray(int a[], int Size)
{
	int i;
 	for(i = 0; i < Size; i++)
  	{
      cout<<a[i]<<" ";
    }
    cout<<"\n";
}*/



