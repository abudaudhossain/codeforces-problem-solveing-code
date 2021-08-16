#include<iostream>
using namespace std;

int main()
{
    long long int n,i,j;


    cin>>n;
    long long int lukyNumber[n+10];
     lukyNumber[0]=4;
    lukyNumber[1]=7;
    i=1;

    for(j=0;lukyNumber[i]<n;j++)
    {
        i++;
        lukyNumber[i]=(lukyNumber[j]*10)+4;
        i++;
        lukyNumber[i]=(lukyNumber[j]*10)+7;
    }

    for(j=0;j<=i;j++)
    {
       // cout<<lukyNumber[j]<<" ";
        if(n%lukyNumber[j]==0)
        {
            cout <<"YES"<<endl;
            break;
        }
    }
    if(j>=i)
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
