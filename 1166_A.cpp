#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n ,ans = 0;
    cin >> n;
    string student_arr[n];
    for(int i = 0; i < n; i++){
        cin >> student_arr[i];
    }

    int litters [26];
   char a;
    for(int i = 0; i < 26; i++)
    {
        litters[i] =0;
    }
for(int i = 0; i < n; i++)
    {
        litters[student_arr[i][0]-97] ++;
    }

for(int i = 0; i < 26; i++)
{
    a = i + 97;
    cout <<a <<" = "<< litters[i]<<" ";
}

for(int i = 0; i < 26; i ++){
   if(litters[i]>1){int  ans1 = litters[i] / 2;
   int ans2 = (litters[i] / 2) + (litters[i] % 2);
 ans += ((ans1 * (ans1 - 1)) / 2) + ((ans2 * (ans2 - 1)) / 2); }
}
cout <<endl << ans<<endl;



    return 0;
}
