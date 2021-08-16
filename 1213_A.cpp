#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,coins1 = 0,coins2 = 0;
    cin >>n;
    long long int chips_arr[105];
    for(int i= 0;i < n; i++)
    {
        cin >> chips_arr[i];
    }
    //sort(chips_arr, chips_arr+n);
    //cout <<chips_arr[0]<<" ";

    for(int j=0; j<n; j++)
    {
        //cout <<chips_arr[j];
        if(chips_arr[j]%2 == 0){coins1++;}
            if(chips_arr[j]%2 != 0){coins2++;}

    }
    if(coins1<coins2)
    {
        cout <<coins1<<endl;
    }
    else
        cout <<coins2<<endl;
    //cout <<endl;
    //cout <<coins<<endl;

    return 0;
}



