#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
// searching element in 2d array
int main()
{
    int n,m,k;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {

            cin>>arr[i][j];
        }
    }
    cin>>k;
    cout<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(k==arr[i][j])
            {
                cout<<"element is found =>"<<i<<" "<<j;
                break;
            }
        }
        cout<<endl;
    }

    return 0;
}