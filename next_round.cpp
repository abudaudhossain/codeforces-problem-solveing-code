#include<iostream>
using namespace std;

int main()
{
    int n,k,coun=0;

    cin>> n>> k;
    int inarray[n+10];
    for(int i=0;i<n;i++){
    cin>>inarray[i];}
    for(int i=0;i<n;i++)
    {
        if(inarray[i]>=inarray[k-1])
        {

            if (inarray[i]>0)
            {
                coun++;
            }


        }

    }
    //cout<<inarray[k-1];
    cout <<coun<<endl;

    return 0;
}
