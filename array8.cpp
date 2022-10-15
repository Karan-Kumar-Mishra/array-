#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<climits>
using namespace std;
//find repeat element in array
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
    for(int i=0; i<n; i++)
    {
        int rep=arr[i];
        for(int j=i+1; j<n; j++)
        {
            if(rep==arr[j])
            {
                cout<<"repeat element =>"<<arr[j]<<endl;
                break;
            }
        }
    } 

    return 0;
}