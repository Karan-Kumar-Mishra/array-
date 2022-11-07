#include<iostream>
#include<stdio.h>
using namespace std;
//print spiral element in 2d array
/*
  input: 1 2 3
         4 5 6
         7 8 9
  output: 1 2 3 6 9 8 7 4

*/
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int row=0,col=0;
    for(int c=0; c<n; c++)
    {
        cout<<arr[row][c]<<" ";
        col=c;
    }
    for(int r=1; r<m; r++)
    {
        cout<<arr[r][col]<<" ";
        row=r;
    }
    for(int c=col-1; c>=0; c--)
    {
        cout<<arr[row][c]<<" ";
        col=c;
    }
    for(int r=row-1; r>0; r--)
    {
        cout<<arr[r][col]<<" ";
    }
    return 0;
}