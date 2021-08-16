#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string subs;
string substring(string s, int a){

   char aa[4];
   aa[0]=s[a];
   aa[1]=s[a+1];
   aa[2]=s[a+2];
   aa[3]=s[a+3];


    //subs = aa;
    return aa;
}

int main()
{
    int n, i;
    string a, b, c;
    c = "acab";
    cin >> n >> a;
    for( i = 0; i < n; i++)
    {
        b =substring(a,i);
        if(b == c)
            break;

    }

    if(i < n-3)
    {
        cout <<"YES" <<endl<< i <<" " <<i+3 <<endl;
    }
    else
        cout <<"NO"<<endl;

    return 0;
}
