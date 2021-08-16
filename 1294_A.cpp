#include<bits/stdc++.h>
using namespace std;
int max_fun(int a,int b, int c)
{
    int max1=a;
    if(max1<b){max1=b;}
    if(max1<c){max1=c;}

    return max1;
}

int main()
{
    int n, a, b, c, t;
    cin >>t;
    for(int i=0; i<t; i++)
    {
        cin >>a>>b>>c>>n;

    int max2=max_fun(a,b,c);
    int d=(max2-a)+(max2-b)+(max2-c);
    int dd=n-d;

    if(dd%3==0 && dd>=0)
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
