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
        int n, ans = 0;

        cin >> n;
        int nums[n + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int j = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1 && j > i)
            {
                cout << i << " " << nums[i] << "\n";
                while (j >= 0)
                {
                    if (nums[j] == 0)
                    {
                        if (j < i)
                            break;
                        nums[j] = nums[i];
                        ans++;
                        j--;
                        break;
                    }
                    j--;
                }
            }
            if (j < i)
                break;
        }

        cout << ans << "\n";
    }

    return 0;
}