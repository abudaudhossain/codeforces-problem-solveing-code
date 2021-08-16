#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t,radiator,sum, i, j, a, b, ans;

    cin >> t;
    for(i=0; i<t; i++)
    {
        ans=0;
        cin >>radiator >>sum;

        if(radiator>=sum)
        {
            cout <<sum <<endl;
        }
        else
        {
            a=sum/ radiator;
            b= sum%radiator;

            for(j=0; j<radiator-b; j++)
            {
                ans=ans+ int(pow(a,2)+0.5);
            }
            a=a+1;
            for(j=0; j<b; j++)
            {
                ans= ans+ int(pow(a,2)+0.5);
            }
            cout <<ans<<endl;

        }
    }


    return 0;
}
