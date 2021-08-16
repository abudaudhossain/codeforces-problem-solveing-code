#include <bits/stdc++.h>
using namespace std;




int32_t main()
{
	//TFiOS;

    int q,n;
    cin >> q;
    while(q--)
    {
        cin >> n;
        int s=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            s+=x;
        }
        int ans = (s+n-1)/n;
        cout << ans << endl;
    }
	return 0;
}
