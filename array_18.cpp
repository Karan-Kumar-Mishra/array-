#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
/*
input: 1 2 3
       4 5 6
       7 8 9
output: 1 4 7
        2 5 8
        3 6 9
*/
int main()
{
    int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<3; i++)
    {
        for(int j=i; j<3; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}