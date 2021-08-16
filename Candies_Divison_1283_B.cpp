#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int  t, n, k, a,  ans;
    cin >>t;
    for(int i=0; i<t; i++)
    {
        cin >>n >>k;
        ans = n/k*k;
        a=n%k;
        if(a==k/2 )
        {
            ans=n;
        }
        else if(a>(k/2))
        {
            ans = n-(a%(k/2));
        }
        if(ans==0)
        {
            ans=1;
        }


        cout <<ans <<endl;
    }

    return 0;
}
