#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int number_sticks,sum1=0,sum2=0,distance;
    cin >> number_sticks;
    int lenght_sticks[number_sticks];
    for(int i=0;i<number_sticks ; i++)
    {
        cin >>lenght_sticks[i];
    }
    sort(lenght_sticks,lenght_sticks+number_sticks);
    /*for(int i=0;i<number_sticks ; i++)
    {
        cout <<lenght_sticks[i] << " ";
    }
    */

    for(int i=0;i<number_sticks/2 ; i++)
    {
        sum1 +=lenght_sticks[i];
    }
   // cout <<sum1<<endl;

    for(int i=(number_sticks/2);i<number_sticks; i++)
    {
        sum2 +=lenght_sticks[i];
    }
    //cout <<sum2<<endl;

    distance=sum1*sum1+sum2*sum2;
    cout <<distance<<endl;

    return 0;
}

