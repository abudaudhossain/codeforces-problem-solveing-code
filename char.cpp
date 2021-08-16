#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=1;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=1;i<n;i++)
    for(int j=0;j<2;j++)
        {
            //cout <<arr[i][j]<<endl;

            if(arr[i][j]==arr[i-1][j+1])
            {
                 a++;
               //cout <<"a:"<<a<<endl;
            }
        }

cout<<a<<endl;
   /* string ss[3];
     ss[0]="10";
     ss[1]="01";

    for(int i=0;i<1;i++)
    for(int j=0;j<2;j++)
        cout <<ss[i][j]<<endl;*/


    return 0;
}
