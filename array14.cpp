#include<iostream>
#include<stdio.h>
#include<climits>
using namespace std;
//find maximum subarray by kadane's algorithm
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int currentSum=0;
    int maxsum=INT_MIN;
    for(int i=0; i<n; i++)
    {
        currentSum+=arr[i];
        if(currentSum<0)
        {
            currentSum=0;
        }
        maxsum=max(maxsum,currentSum);
    }

cout<<maxsum<<endl;
return 0;
}