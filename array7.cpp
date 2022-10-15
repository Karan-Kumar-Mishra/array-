#include<iostream>
#include<stdio.h>
#include<climits>
using namespace std;
//find max in array till n
int main()
{
    int n;
    cout<<"enter the size of array=>"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter the element =>"<<endl;
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
    return 0;
}