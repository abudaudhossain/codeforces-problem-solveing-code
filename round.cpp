#include<iostream>
using namespace std;

int main()
{
    int n,k,coun=0,a=0;

    cin>> n>> k;
    int inarray[n];
    for(int i=0;i<n;i++)
    {
        cin >>inarray[i];
    }
    for(int i=0;i<n;i++)
    {
        if(inarray[i]>0)
        {
            a++;
        }
    }

    if(a>k)
    {
      for(int i=0;i<n;i++)
      {
          if(inarray[i]>=k && coun<k)
          {

              coun++;
          }
          else if(inarray[i]==inarray[i-1])
          {
              coun++;
          }
          else
          {
              break;
          }
      }
      if(coun<k )
      {
          coun=k;
         // int x=k;
         // int b=x+1;
          //cout<<inarray[b] <<" "<<inarray[b]<<" "<<x+1<<endl;
            int i=k;
          while(i<n)
                {if(inarray[i]=inarray[i-1])
            {


                coun++;
                i++;
            }}
      }
    }
    else
    {
        coun=a;
    }

    cout <<coun<<endl;

    return 0;
}
