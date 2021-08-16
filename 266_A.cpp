#include<iostream>

using namespace std;
int main()
{
    int n,a,i,j;
    cin>>n>>a;

    char str[n],temp;

    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for( j=0;j<a;j++)
    {
        for( i=0;i<n;i++)
        {
        if(str[i]=='B'&&str[i+1]=='G')
        {
            temp=str[i];
            str[i]=str[i+1];
            str[i+1]=temp;
            i++;

        }

        }



    }
    for( i=0;i<n;i++)
    {
        cout<<str[i];
    }
    cout<<endl;

    return 0;
}
