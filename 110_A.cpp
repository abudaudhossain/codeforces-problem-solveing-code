#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 //freopen("A.in","r",stdin);
 //freopen("A.out","w",stdout);
 //ios_base::sync_with_stdio(false);
 char n[50];
 int f,i;
 while(!(cin>>n).eof())
 {
  f=0;
  for(i=0;i<strlen(n);i++)
  {
   if(n[i]=='7' || n[i]=='4')
   {
    f++;
    }
  }
  if(f==4  || f==7)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
 }

 return 0;
}
