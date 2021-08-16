#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
     cin >>s;
    //cout<<".";
    //char a='B';
    //int b=a+32;
    //cout <<(char)b;


            /*if((int) s[i]<91)
            {
                s[i]=s[i]+32;
                //cout <<(char)s[i];
            }*/


          for (long long i=1;i<s.size();i++)
    {
         transform(s.begin(),s.end(),s.begin(), ::tolower);
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
            //s[i]='A';
            if(s[i]==s[i-1])
                {continue;}
           // else
               // {cout<<".";}
               }


  //if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){continue;}
else
 {cout <<"."<<s[i];}

    }
    return 0;
}
