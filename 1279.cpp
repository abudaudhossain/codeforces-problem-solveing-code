#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    ll t,d;
    cin >>t;
    for(int i =0; i<t; i++){
    ll arr[4];
    cin >>arr[0]>>arr[1]>>arr[2];

    sort(arr,arr+3);

    if(arr[0]+arr[1]+1 >=arr[3])
    {
        cout <<"Yes"<<endl;

    }
    else
    {
        cout <<"No"<<endl;
    }
    }



    //cout <<a<<endl;



    return 0;
}
