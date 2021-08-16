#include<iostream>
using namespace std;
int main()
{
    int t,n, i, j,l,ans, aa, arr1[100003],arr2[100003];

    cin >> t ;
    for(int x = 0; x < t; x ++)
    {
        cin >> n;


    for(i = 0; i < n; i ++)
    {
        cin >> arr1[i];

    }
    for(i = 0; i < n; i ++)
    {
        cin >> arr2[i];
    }

    aa = arr2[0] - arr1[0] ;
    if(aa < 0)
    {
        ans = 2;
    }

    else if(aa == 0)
        ans = 0;
    else
        ans = 1;

    for(i = 1; i < n; i ++ )
    {
        l=arr2[i] - arr1[i];
        if(l < 0) ans =2;
       // cout << i <<"aa= "<< aa <<"l="<< l <<"ans="<< ans<<endl;
        if(ans == 1)
        {
            if( l != aa )
            {
                if(l != 0) {
                 ans = 2;
                 break;}
                //else ans = 1;2
            }
        }
        if(ans == 0)
        {
            if(l != aa)
                {ans = 1;}
        }

        aa = l;
    }
    //cout << i;
    if(ans == 2) cout << "NO" << endl;
    else cout << "YES" << endl;

    }
    return 0;
}
