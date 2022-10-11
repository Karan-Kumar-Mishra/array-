#include<iostream>
#include<stdio.h>
using namespace std;
//bubble short in array
int main()
{
    int n;
    cout<<"enter the size of array =>"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"enter the element =>"<<endl;
        cin>>arr[i];
    }
    int counter=1;
    while(counter <n)
    {
        for(int i=0; i<n-counter; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;
    }
    for(int i=0; i<n; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}