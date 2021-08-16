#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
/*int min_fun(int a, int b, int c)
{
    int min_num=a;
    if(min_num>b)
    {
        min_num=b;
    }
    if(min_num >c)
    {
        min_num=c;
    }

    return abs(min_num);*/



int main()
{
    int t,ans,ans1, ans2, i,j;

    cin >>t;
    int arr[4];
    for(i=0;i<t; i++)

    {
        ans=0;
        for(j=0; j<4; j++)
        {
            cin >>arr[j];
        }
        if(arr[0]>arr[1])
        {
                int aa;
        aa=arr[0];
        arr[0]=arr[1];
        arr[1]=aa;
        }

        if((arr[2]+arr[3])<=arr[1] &&( arr[2]-arr[3])>=arr[0])
        {
            ans1=(arr[2]-arr[3])-arr[0];
           // cout <<ans1<< endl;
            if(ans1<0){ans1=0;}
            ans2=arr[1]-(arr[2]+arr[3]);
            //cout <<ans2<<endl;
            if (ans2<0)
            {
                ans2=0;
            }
             ans=ans1+ans2;
        }
        else if((arr[2]+arr[3])>= arr[1] && (arr[2]-arr[3])<=arr[1])
        {
            ans=(arr[2]-arr[3])-arr[0];
            if(ans<=0)
            {
                ans=0;
            }
        }
        else if(arr[2]-arr[3]<=arr[0] && arr[2]+arr[3]>=arr[0])
        {
            ans= arr[1]-(arr[2]+arr[3]);
            if(ans <=0)
            {
                ans=0;
            }
        }

        else
        {
            ans=arr[1]-arr[0];
            if(ans<=0)
            {
                ans=0;
            }
        }

        cout <<ans <<endl;;
    }

        return 0;
}
