#include<iostream>
#include<stdio.h>
using namespace std;
//insertion sort on array
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the element =>"<<endl;
        cin>>arr[i];
    }
    int count=0;
    while(count!=n)
    {
        for(int i=1; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
            else if(arr[i-1]>arr[i])
            {
                swap(arr[i-1],arr[i]);
            }
        }
        count++;
    }

    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}