#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test, n, a;
    string s;
    cin >> test;
    for(int i = 0; i < test; i ++)
    {
         int ans = 0, max1 = 0;
        cin >> n;
        cin >> s;
        if(s[0] == '1' || s[n-1] == '1') ans = n * 2;

        else{
        for(int j = 1; j < n-1; j++)
        {
            if (s[j] == '1')
            {
                if(j >= n/2 && max1 < j + 1)
                {
                    max1 = j + 1;

                }
                else
                {
                    a = n - j;
                    if(max1 < a){
                    max1 = a;}
                }
            }
            ans = max1 * 2;
        }
        if(ans == 0) ans = n;

        }

        cout << ans <<endl;
    }

    return 0;
}
