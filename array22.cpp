#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n,i=0,curr=0,max=0;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
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
        if(arr[i]=='\0')
            break;
        i++;
    }
    cout<<max<<endl;
    return 0;
}