#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    while(true){
    long long int n,p,j,i,val,counter=0,k;
    cin >>n>>p;

    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >>arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            val=arr[i]*arr[j];
            cout <<val<<endl;
            for( k=0;k<100;k++)

            {
                int d=(int)(pow(k,p)+0.1);
                //cout<<"abu"<<d<<endl;
                if(val==d)
                {
                    cout <<val<<"**"<<endl;
                    counter++;
                    break;
                }
                if(pow(k,p)>=val)
                {
                    break;
                }
            }
        }
    }

    cout <<counter<<endl;}

    return 0;
}
