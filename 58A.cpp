#include<iostream>
using namespace std;

int main()
{
    string is;
    cin>>is;
    int i,j=0;
    for(i=0;i<is.size();i++)
    {
        if(is[i]=='h')
        {
            //cout<<"h";
             for(i++;i<is.size();i++)
                {
                    if(is[i]=='e')
                    {
                       // cout<<"e";
                        for(i++;i<is.size();i++)
                        {
                            if(is[i]=='l')
                            {
                                //cout<<"l";
                                for(i++;i<is.size();i++)
                                {
                                    if(is[i]=='l')
                                    {
                                       // cout<<"l";
                                        for(i++;i<is.size();i++)
                                        {
                                            if(is[i]=='o')
                                            {
                                                j=i;
                                               cout <<"YES"<<endl;
                                               break;


                                            }

                                        }
                                        break;

                                    }


                                }
                                 break;
                            }


                        }
                         break;
                    }

                }
                break;
        }
    }
    if(j<1)
    {
        cout <<"NO"<<endl;
    }

   // cout<<i;
    return 0;
}
