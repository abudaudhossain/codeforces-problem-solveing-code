#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,colors_numbers=1;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }
    sort(arr,arr+n);
    for(int j=0; j<n-1; j++)
    {
        for(int k=j+1; k<n; k++)
        {
            if(arr[k]%arr[j]==0)
            {
                for(int a=k; a<n; a++)
                {
                    arr[a]=arr[a+1];
                }
                n--;
                k--;

            }

        }

    }

    /*for (int i=0;i<n;i++)
    {
        cout <<arr[i]<<" ";
    }
    cout <<endl;*/

    cout <<n<< endl;

    return 0;
}
