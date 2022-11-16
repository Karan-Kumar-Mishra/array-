#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0,k=0,max=0,curr=0;
    while(1)
    {
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(curr>max)
            {
                max=curr;
            }
            curr=0;
        }
        else
        {
            curr++;
        }
        if(arr[i]==' ')
        {
            k=i+1;
        }
        if(arr[i]=='\0')
        {
            break;
        } 
        i++;
    }
    for(i=0; i<=max; i++)
    {
        cout<<arr[i+k];
    }
    cout<<endl;
    cout<<"largest length =>"<<max<<endl;
    return 0;
}