#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a[]= {1,2,3,4,5};
    int b[]= {6,7,8,9,10};
    cout<<"before swap array :"<<endl;
    for(int x:a)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    for(int x:b)
    {
        cout<<" "<<x;
    }
    cout<<endl<<endl;
    cout<<"after swap array :"<<endl;
    swap(a,b);
    for(int x:a)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    for(int x:b)
    {
        cout<<" "<<x;
    }
    return 0;
}