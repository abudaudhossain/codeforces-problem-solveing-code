#include<iostream>
using namespace std;
int main()
{
    int arr[105];
    int price[104];
    int q,n,sum;
    cin >>q;
    for(int i=0;i<q;i++)
    {
        cin >>n;
        sum=0;
        for(int j=0;j<n;j++)
        {
            cin >>arr[j];
        }

        for(int k=0;k<n;k++)
        {
            sum=sum+arr[k];
            //cout<<sum<<endl;
        }
        price[i]=sum/n;
       // cout<<price[i]<<endl;
        if(sum%n!=0)
        {
            price[i]=price[i]+1;
           // cout<<price[i]<<endl;
        }

    }
    for(int a=0;a<q;a++)
    {
        cout<<price[a]<<endl;
    }

    return 0;
}
