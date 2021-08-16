#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, n,a,b,c;
    cin >>n;

    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];

        }

    }
     for(int i=0;i<n;i++)
    {

sort(arr[i],arr[i]+3);
 a=arr[i][0];
    b=arr[i][1];
    c=arr[i][2];


    //cout <<a<<b<<endl;
    q=(b-a)+(c-a)+(c-b);
    //cout<<q<<endl;
    if(q>4)
    {
        q=q-4;
    }
    else
        {q=0;}
    cout <<q<<endl;
       }

    return 0;
}
