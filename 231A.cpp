#include<iostream>

using namespace std;

int main()
{while(true){
    int n,a,coun=0;
    cin >>n;
    int ia[n][3];
    for(int i=0;i<n;i++){
         cin >>ia[i][0]>>ia[i][1]>>ia[i][2];
    }
    for(int i=0;i<n;i++)
    {
       a=ia[i][0]+ia[i][1]+ia[i][2];
       if(a>=2){coun++;}

    }

    cout <<coun<<endl;}
    return 0;
}
