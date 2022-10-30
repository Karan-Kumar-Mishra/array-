#include<iostream>
#include<stdio.h>
#include<climits>
using namespace std;
int pairsum(int arr[],int n,int k)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<i<<" "<<j<<endl;
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[]= {2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(arr,sizeof(arr),k);
    return 0;
}