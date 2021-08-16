#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main()
{while(true){
    string str;
    cin>> str;

    int U=0,l=0,lenght =str.length();
   // cout <<lenght;
    if(lenght!=1){
            if(islower(str[0])&&isupper(str[lenght-1]))
                {

                    for(int i=1;i<lenght;i++)
                    {
                       // int c=str[i];

                        if(isupper(str[i])&&isupper(str[i+1]))
                        {

                            l++;

                        }
                        else
                        {
                            break;
                        }
                    }
                        if(l==lenght-2)
                        {
                            transform(str.begin(),str.end(),str.begin(),::tolower);
                            str[0]=toupper(str[0]);
                        }

                }
    else
        {
            for(int i=0;i<lenght;i++)
                {
                    if(islower(str[i]))
                    {
                        break;
                    }
                    U++;
                }

        }
   // cout<<U<<endl;
    if(U==lenght)
    {
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
    }
    else{if(islower(str[0]))
        {
            str[0]=toupper(str[0]);
            //cout<<str<<endl;
        }
        else
        {
            str[0]=tolower(str[0]);
        }
    }

    cout<<str<<endl;
}

    return 0;
}
