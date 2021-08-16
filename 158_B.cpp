#include<iostream>
using namespace std;

int main()
{


    int n,f=0,th=0,tw=0,o=0;
    cin>>n;
    int iarr[n];
    for(int i=0;i<n;i++)
    {
        cin>>iarr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(iarr[i]==4)
        {
           f++;
        }
        if(iarr[i]==3)
        {
            th++;
        }
        if(iarr[i]==2)
        {
            tw++;
        }
        if(iarr[i]==1)
        {
            o++;
        }

    }
   // cout<<f<<" "<<th<<" "<<tw<<" "<<o<<endl;

    if(th>=o)
    {
        f+=th;
        o=0;
    }
   // cout <<f<<" "<<th<<" "<<tw<<" "<<o<<endl;
    if(th<o)
    {
        f+=th;
        o-=th;
    }
   // cout <<f<<" "<<th<<" "<<o<<endl;

    if(tw%2==1||o==2||o==1)
    {
        f++;
        if(tw%2==1){
        tw-=1;}
        if(o==2||o==1){
        o=0;}
        else
        {
            o-=2;
        }
       // cout<<f<<endl;


    }
    if(tw%2==0)
    {
        f+=(tw/2);
       // cout<<" v"<<f<<endl;
    }
       // cout <<f<<endl;

    if(o>=2)
    {
        if(o==3||o%4==3 )
        {
            f++;
        }
         f+=o/4;

         if(o%4==2||o%4==1)
         {
             f++;
         }
        // cout <<"o"<<f<<endl;

    }

   cout <<f<<endl;

    return 0;
}
