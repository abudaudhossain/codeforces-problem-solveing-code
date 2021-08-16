#include<iostream>
using namespace std;
int main()
{
    int n, nn=1, t=0;
    cin >>n;
    string s;
    cin >> s;



        for(int j = 0; j < n; j=j+2)
        {
            if(s[j]== s[j+1])
            {
                if(s[j]=='a')
                {
                    s[j]= 'b';
                    //j++;
                    t++;
                }
                else
                {
                    s[j]= 'a';
                    //j++;
                    t++;
                }
                //cout <<s<<endl;


            }
        }

    //cout <<nn<<endl;
    cout <<t<<endl;
    cout <<s <<endl;

    return 0;
}
