#include<iostream>
#include<climits>
#include<stdio.h>
using namespace std;
//find min and max value in array
int main()
{
    int n;
    cout<<"enter the size of array =>"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter the element=> "<<endl;
        cin>>arr[i];
    }
    int max_no=INT_MIN;
    int min_no=INT_MAX;
    for(int i=0; i<n; i++)
    {
        max_no=max(arr[i],max_no);
        min_no=min(arr[i],min_no);
    }
    cout<<"max number =>"<<max_no<<endl;
    cout<<"min number =>"<<min_no<<endl;

    return 0;
}