#include<iostream>

using namespace std;

int main()
{
   int n,a=1;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    for(int i=1;i<n;i++)
    for(int j=0;j<2;j++)
        {


            if(arr[i][j]==arr[i-1][j+1])
            {
                 a++;
            }
        }

cout<<a<<endl;


    return 0;
}
