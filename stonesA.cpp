#include<iostream>

using namespace std;
int main()
{
    int n,a,b,c,res=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
    }
    int i=0;
    while(b>=1&&c>=2)
    {
        b--;
        c-=2;
        res+=3;
        if(b==0||c==0)
        {
            break;
        }
        i++;
    }
    while(a>=1&&b>=2)
    {
        a--;
        b-=2;
        res+=3;
        if(a==0||b==0)
        {
            break;
        }
        i++;

    }

   cout <<res<<endl;

    return 0;
}
