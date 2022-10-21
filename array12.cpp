#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<climits>
using namespace std;
//sum of all sub array is = s
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
    cout<<"s: "<<endl;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum=0;
            for(int k=i; k<=j; k++)
            {

                sum=sum+arr[k];
            }

            if(sum==s)
            {
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
    }

    return 0;
}