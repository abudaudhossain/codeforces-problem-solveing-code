#include<iostream>
using namespace std;

int main()
{
    int a,b,c,maximum;
    cin>>a>>b>>c;
    /*if(a==b==c==1)
    {
        cout<<a+b+c<<endl;
    }
    else
    {
        if()
    }
    */
    maximum=a+b+c;
    if((a+b)*c>maximum)
    {
        maximum=(a+b)*c;
    }
    if(a*(b+c)>maximum)
    {
        maximum=a*(b+c);
    }
    if(a*b*c>maximum)
    {
        maximum=a*b*c;
    }
    if((a*b)+c>maximum)
    {
        maximum=(a*b)+c;
    }
    if(a+(b*c)>maximum)
    {
        maximum=a+(b*c);
    }

        cout<<maximum<<endl;

    return 0;
}
