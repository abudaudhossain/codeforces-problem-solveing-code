#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, ans = 0;

        cin >> n;
        long long int nums[n + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            ans = ans + nums[i];
        }

        cout << abs(ans) << "\n";
    }

    return 0;
}