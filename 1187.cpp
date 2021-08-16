#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i,j, ans,a,b;
    cin >>t;
    int arr[103][3];
    for(i=0; i<t; i++)
    {
        for(j=0; j<3; j++)
        {
            cin >>arr[i][j];
        }
    }
    for(i=0; i<t; i++)
    {
        a=arr[i][0]-arr[i][1];
        b=arr[i][0]-arr[i][2];
        if(a>b)
        {
            cout <<a+1<<endl;
        }
        else{cout <<b+1<<endl;}
    }

    return 0;
}
