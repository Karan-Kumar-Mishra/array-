#include<iostream>
#include<climits>
#include<stdio.h>
using namespace std;
//binar search in array 
int binary_search(int arr[],int n,int key)
{
    int s=0;
    int e=n;

    while(s<=e)
    {
        int mid =(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            e=mid-1;

        }
        else
        {
            s=mid+1;

        }
    }
    return 0;
}
int main()
{
    int n,key;
    cout<<"enter the number of element =>"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter the element =>"<<endl;
        cin>>arr[i];
    }
    cout<<"enter the key =>"<<endl;
    cin>>key;
    if(binary_search(arr,n,key))
    {
        cout<<"element is found "<<endl;
    }
    else
    {
        cout<<"element is not found "<<endl;
    }
    return 0;
}