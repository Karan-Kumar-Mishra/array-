#include<iostream>
#include<climits>
#include<stdio.h>
using namespace std;
//linear search in array
int main()
{ 
    int n,key;
    cout<<"enter the number of element =>"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cout<<"enter the element =>"<<endl;
    cin>>arr[i];
    }
    
    cout<<"enter the element to search =>"<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
    if(key==arr[i])
      {
       cout<<"element is found  "<<arr[i]<<"  index=> "<<i<<endl;
      }
    }
    return 0;
}