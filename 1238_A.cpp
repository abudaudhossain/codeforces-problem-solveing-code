#include<iostream>

using namespace std;
int main()
{
    int test_n,x;
    cin>>test_n;
    long long int  in_arr[test_n][2];
    for(int i=0;i<test_n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin >>in_arr[i][j];
        }

    }

    for(int i=0;i<test_n;i++)
    {
        if(in_arr[i][0]-in_arr[i][1]<=1)
        {
            cout <<"NO"<<endl;
        }
        else
            cout <<"YES"<<endl;
    }

    return 0;
}
