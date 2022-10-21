#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<climits>
using namespace std;
//max in all subarray
int main()
{
    int n,s;
    cout<<"enter the size of array =>"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum=0;
            for(int k=i; k<=j; k++)
            {

                sum=sum+arr[k];
            }
            mx=max(mx,sum);
        }
    }
    cout<<mx<<endl;
    return 0;
}