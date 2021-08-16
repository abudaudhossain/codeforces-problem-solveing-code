#include<iostream>

using namespace std;
int main()
{
    long long int n,i,j,x,y;

    cin>> n;
    long long int arr[n+9][5];
    for(x=0;x<n;x++)
    {
        for(j=0;j<2;j++)
        {
            cin >>arr[x][j];
        }
    }
    for(i=0;i<n;i++)
    {
       y=arr[i][0];
       if(y>=arr[i][1])
       {
           cout <<"YES"<<endl;
       }
       else
       {
          if(y%2!=0)
          {
              y=y-1;
          }
          if((y*3)/2>y&&(y*3)/2 !=y+1)
          {
              cout <<"YES"<<endl;
          }
          else if((y*3)/2==arr[i][1])
          {
              cout <<"YES"<<endl;
          }
          else{
            cout <<"NO"<<endl;
          }

       }


    }




    return 0;
}
