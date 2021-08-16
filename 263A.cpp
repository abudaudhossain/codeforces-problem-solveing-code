#include<iostream>
using namespace std;

int main()
{//while(true){
    int iarr[6][6],i,j,a,b;
    for( i=1;i<6;++i)
    {
        for( j=1;j<6;++j)
        {
            cin>>iarr[i][j];
        }
    }

    for( i=1;i<6;i++)
    {
        for( j=1;j<6;j++)
        {
            if(iarr[i][j]==1)
               {//cout <<i<<j;
                a=i;

                b=j;}



        }
//cout <<endl;

    }
    //cout <<a<<" ";
    //cout <<b<<endl;
    if(a<=3&&b>=3)
    {
        a=3-a;
        b=b-3;
    }
    else if(b<=3 && a>=3)
    {
        b=3-b;
        a=a-3;
    }
    else if(b>=3 && a>=3)
    {
        a=a-3;
        b=b-3;

    }
    else if(a<3 &&b<3)
    {
        a=3-a;
        b=3-b;
    }
   // cout <<a<<b;

    cout <<a+b<<endl;

    cout<<abs(-6);

    return 0;
}
