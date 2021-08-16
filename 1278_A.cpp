#include<bits/stdc++.h>
using namespace std;
int main()
{
    string pass, h_pass;
    cin >>pass >>h_pass;


    int pn=0;
    for(int i=0; i<h_pass.size();i++)
    {
        for(int j=0; j<pass.size(); j++)
        {
            if(h_pass[i]==pass[j])
            {

               pn++;



            }
            else if(pass.size()>pn)
            {
                pn=0;
            }
        }
    }

    if(pn>pass.size()==pn+1 )
    {
        cout <<"YES" <<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }


    return 0;
}
