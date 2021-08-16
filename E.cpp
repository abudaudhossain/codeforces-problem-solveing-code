#include<iostream>

using namespace std ;
int main()
{
    int n,k,j;
    cin>>n>>k;

    int arr[m];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        //for(int j=i+1;j<n;j++)
        //{
            arr[i]=(arr[i]+arr[i+1])/k;

            for(j=i+1;j<n;j++)
            {
                arr[j]=arr[j+1];
            }

       // }
    }


    return 0;
}
