#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,target;
    cin>>n>>m>>target;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int r=0,c=m-1;
    bool found=false;
    while(r<n and c>=0)
    {
        if(arr[r][c]==target)
        {
            found=true;
        }
        if(target>arr[r][c])
        {
            r++;
        }
        else {
            c--;
        }
    }
    if(found)
    {
        cout<<"element is found "<<endl;
    }
    else
    {
        cout<<"element is not found "<<endl;
    }
    return 0;
}