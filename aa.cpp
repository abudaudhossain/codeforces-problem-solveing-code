#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long int  t,i,j;
    cin >>t;
    for( i=0;i<t;i++)
    {
        long long int y, jj,k,ans=0;
        cin >>y;
        if(y==1){ans=1;}
        else
        {


        for(j=1;(long long int)( pow(10,j)+0.5)<=y; j++)
        {
            ans=ans+9;
            //cout <<ans<<endl;
        }
       // cout<<(int )(pow(10,i-1)+0.5);
        if((int )(pow(10,j-1)+0.5)<y)
        {
            k=(((int)(pow(10,j)+0.5))-1)/9;
           // cout <<" "<<k<<" ";
            jj=y/k;
           // cout <<j<<" ";
            ans=ans+jj;
        }}
        cout <<ans<<endl;

    }
    return 0;
}
