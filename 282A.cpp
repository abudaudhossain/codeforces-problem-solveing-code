#include<iostream>
using namespace std;
int main()
{
    int n,coun=0;
    cin >>n;
    string in_sa[n];
    for(int i=0;i<n;i++)
    {
        cin >>in_sa[i];
    }
    for(int i=0;i<n;i++)
    {
        if(in_sa[i]=="X++"||in_sa[i]=="++X")
           {
            coun++;
           }
           else{
            coun--;
           }
    }
    cout <<coun<<endl;

    return 0;
}
