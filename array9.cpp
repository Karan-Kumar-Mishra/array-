#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<climits>
using namespace std;
/*
 probleam find the first repeating element
 whose index of first occurnce is smallest
 input : 7
         1 5 3 4 3 5 6

 output: 2
*/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        int rep=arr[i];
        for(int j=0; j<n; j++)
        {
            if(rep==arr[j] && i!=j)
            {
                cout<<i+1;
                return 0;
            }
        }
    }
    return 0;
}