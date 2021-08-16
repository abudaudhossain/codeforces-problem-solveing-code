#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,j;

    string s,ans;

    cin >>t;
    for(i=0; i<t; i++)
    {
        cin >>n >>s;

        int sum=0;
        for(j=0;j<n;j++)
        {
            sum +=s[j];
            if(sum%2 ==0 && s[j]%2 ==1 && s[j] !=0)
            {
                break;
            }


        }
        //cout <<j<<"k";
        if(j==n){
         cout <<"-1" <<endl;
        }
        else
        {

            for(int x=0; x<=j; x++)
        {
            cout <<s[x] ;
        }
        cout <<endl;
        }

    }
    return 0;
}
