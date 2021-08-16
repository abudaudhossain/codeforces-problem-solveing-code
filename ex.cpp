// A fast IO program
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, t;
    int cnt = 0;
    cin >> n ;
    int arr[n];
    while(n--)
    {
        cin >>arr[n];
    }
    for (int i=0; i <n; i++)
    {
        cout <<arr[i] << " ";
    }

    return 0;
}
