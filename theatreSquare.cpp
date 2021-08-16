#include<iostream>
using namespace std;

int main()
{
    long a,b,c, stone=1;
    cin >>a>>b>>c;

    if (a%c!=0)
    {
        stone=stone*(a/c+1);

    }
    else
    {
        stone=stone*(a/c);
    }
    if (b%c!=0)
    {
        stone=stone*(b/c+1);
    }

    else
    {
        stone=stone*(b/c);
    }
    cout <<stone<<endl;

    return 0;

}
