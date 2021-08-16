#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,i,sum=0;
    cin >>n;
    for(i=n; i>0;i--)
    {
        sum+=(1/i);
    }
    cout <<fixed <<setprecision(12)<<sum <<endl;
    return 0;
}
