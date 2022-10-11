#include<iostream>
#include<climits>
#include<stdio.h>
using namespace std;
//selection short in array
int main()
{
    int n;
    cout<<"enter the size of array =>"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter the element =>"<<endl;
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"after shorting array"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}