#include<iostream>

using namespace std;
int main()
{
   //unsigned long long int odd_array[1]
   //unsigned long long int even_array[3];

   long long int n,j=1,x=2,z,a;
    cin >>n;
    cin >>a;
  /*  int i=0;
    while(j<=n)
    {
        odd_array[i]=j;
        j=j+2;

        //cout<<" "<<odd_array[i];
        i++;
    }
    int y=0;
    while(x<=n)
    {
        even_array[y]=x;
        x=x+2;

       // cout<<" "<<even_array[y];
        y++;
    }*/
   // cout<<endl;
    //cout<<odd_array[a]<<endl;
    //cout<<n/2;
    //cout<<even_array[a];
    if(n%2!=0)
    {
        z=(n/2)+1;
        //cout <<"z:"<<z<<endl;
    }
    else
    {
        z=n/2;
        //cout<<"z:"<<z<<endl;
    }
    if(a>z)
    {
        a=a-z;
       // cout<<"a:"<<a<<endl;
        cout<<a*2<<endl;
    }
    else{
        if(a>1)    //cout<<"a="<<a<<endl;
       {
            cout<<a+2<<endl;
       }
       else
       {
           cout <<a<<endl;
       }
    }

    return 0;
}
