#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int  t,a,b,n,s,i,k;
    cin >>t;
    for(k=0; k<t; k++)
    {
        cin >>a>>b>>n>>s;

        i=s/n;
        if(i<=a){
        if(i*n==s)
        {
            cout <<"YES"<<endl;

        }
        else if(i*n<s)
        {
            if(s-(i*n)>b)
            {
                cout <<"NO" <<endl;
            }
            else{cout <<"YES"<<endl;}
        }


    }
    else if((a*n)+b >=s)
    {
        cout <<"YES"<<endl;
    }

    else
    {
        cout <<"NO"<<endl;
    }

    }


    return 0;
}
