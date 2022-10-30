#include<iostream>
#include<stdio.h>
#include<climits>
#include<vector>
using namespace std;
//find pair sum in array
int pairsum(int arr[],int n,int k)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        if(arr[low]+arr[high]==k)
        {
            cout<<high<<" "<<low<<endl;
            return 1;
        }
        else if(arr[low]+arr[high]>k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return 0;
}
int main()
{
    int arr[]= {2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(arr,8,k)<<endl;
    return 0;
}