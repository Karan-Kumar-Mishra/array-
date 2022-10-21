#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<climits>
using namespace std;
//sum of each subarray 
int main()
{
    int n;
    cout<<"enter the size of array =>"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum=0;
            for(int k=i; k<=j; k++)
            {
                cout<<arr[k]<<" ";
                sum=sum+arr[k];
            }
            cout<<"sum :"<<sum<<endl;
        }
    }

    return 0;
}