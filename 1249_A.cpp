#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int q, n, arr[104], ans ,i;
    cin >>q;
    while(q--)
    {
        cin >>n;

        for(int i = 0; i < n; i++)
        {
            cin >>arr[i];
        }
        sort(arr, arr + n);
        for( i = 1; i < n; i++)
        {
            if(arr[i] - arr[i-1] < 2)
            {
                ans = 2;
                break;
            }
        }
        if(n==i)
        {
            ans=1;
        }

        cout <<ans <<endl;
    }


    return 0;
}
