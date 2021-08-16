#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,sum=0,i,amout=0;
    cin >>n;
    int arr[n+8];
    for(i=0;i<n;i++)
    {
        cin >>arr[i];
        sum+=arr[i];
    }
    sum=sum/2;
    //cout<<sum<<endl;

    sort(arr,arr+n,greater<int>());
    /*for(i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }*/
   // cout<<endl;

    for(i=0;i<n;i++)
    {
        amout+=arr[i];

        if(amout>sum)
        {
            break;
        }

    }

    cout<<i+1<<endl;


    return 0;
}
