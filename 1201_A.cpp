#include<bits/stdc++.h>
using namespace std;

int maxfun(int a1,int a2, int a3, int a4, int a5)
{
    int max_arr[5];
    max_arr[0]=a1;
    max_arr[1]=a2;
    max_arr[2]=a3;
    max_arr[3]=a4;
    max_arr[4]=a5;
    int max_n=0;
    for(int x=0; x<5; x++)
    {
        if(max_n<max_arr[x])
        {
            max_n=max_arr[x];
        }
    }

   return max_n;
}

int main()
{
    int n, m, ans=0, i, j, max_number,a,b,c,d,e;
    cin >> n;
    cin >> m;
    string ans_arr[n];
    int point_arr[m];

    for(i=0; i<n; i++)
    {
        cin >>ans_arr[i];
    }
    for(i=0; i<m; i++)
    {
        cin >> point_arr[i];
    }

    for(i=0; i<m; i++)
    {
        a=0, b=0, c=0, d=0, e=0;
        for(j=0; j<n; j++)
        {
            if(ans_arr[j][i]=='A'){a++;};
            if(ans_arr[j][i]=='B'){b++;};
            if(ans_arr[j][i]=='C'){c++;};
            if(ans_arr[j][i]=='D'){d++;};
            if(ans_arr[j][i]=='E'){e++;};

        }
        max_number=maxfun(a,b,c,d,e);
      //  cout<<a<<b<<c<<d<<e<<endl;
        //cout <<max_number<<endl;
        ans+=point_arr[i]*max_number;


    }

    cout << ans<<endl;

    return 0;
}
