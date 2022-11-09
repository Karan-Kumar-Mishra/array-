#include<iostream>
#include<stdio.h>
using namespace std;
//check string is palindrome
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check)
    {
        cout<<"This is a palindrome "<<endl;
    }
    else
    {
        cout<<"This is not a palindrome "<<endl;
    }

    return 0;
}