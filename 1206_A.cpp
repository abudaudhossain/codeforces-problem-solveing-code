#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;

int main()
{
    long long int n, nn=0,ans=0,i,j=0;
    cin >>n;
    long long int arr[n];
    for(i=0; i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    for(i=0; i<n;i++)
    {
        if(arr[i]<0)
        {
            ans+=llabs(arr[i]+1);
            nn++;

        }
        else if(arr[i]>0){
            ans+=llabs(arr[i]-1);
        }
        else{
            j++;
        }

    }
   /* for(j=0; j<n;j++)
    {
        cout <<arr[j]<<" ";
    }
    cout <<endl<<nn<<endl;*/
    //cout <<j<<"  "<<nn;
    if(nn%2!=0 && j==0)
    {
        ans=ans+2;
    }
    else{ans+=j;}

    cout <<ans<<endl;



    return 0;
}

