#include<iostream>

using namespace std;

int main()
{while(true){
    string sp;
    int coun=1;
    cin >>sp;
    int i=1;
    while(i<sp.size())
    {

        if(sp[i]==sp[i-1])
        {
            coun++;
            if(coun==7)
            {
                break;
            }


        }
         else if(coun>=7)
            {
                break;
            }
        else
        {
            cout<<coun;
            coun=1;
        }

        i++;
    }
    if(coun>=7)
    {
        cout<<coun<<"YES"<<endl;
    }
    else
    {
        cout <<coun<<"NO"<<endl;
    }}

    return 0;
}
