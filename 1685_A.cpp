#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int x = 0;
    while (x < t)
    {
        int arr_len;
        cin >> arr_len;
        int arr[arr_len];
        int ans_arr[arr_len + 5];

        for (int i = 0; i < arr_len; i++)
        {
            cin >> arr[i];
        }

        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n);

        if (arr_len % 2 != 1)
        {

            for (int i = 0, y = 0; i < arr_len; i = i + 2, y++)
            {
                ans_arr[i] = arr[y];
                ans_arr[i + 1] = arr[arr_len / 2 + y];

                // cout << "add item [" << arr[y] << " ," << arr[arr_len / 2 + y] << "]\n";
            }
            ans_arr[arr_len] = ans_arr[0];
            ans_arr[arr_len + 1] = ans_arr[1];

            // cout << "arrange to arr"
            //      << "\n";
            // for (int i = 0; i < arr_len + 2; i++)
            // {
            //     cout << ans_arr[i] << " ";
            // }
            // cout << "\n";

            int i;

            for (i = 1; i < arr_len + 1; i++)
            {
                if (ans_arr[i] < ans_arr[i - 1] && ans_arr[i] < ans_arr[i + 1])
                {
                    continue;
                }
                if (ans_arr[i] > ans_arr[i - 1] && ans_arr[i] > ans_arr[i + 1])
                {
                    continue;
                }

                break;
            }

            if (i == arr_len + 1)
            {
                cout << "YES"
                     << "\n";
                for (int y = 0; y < arr_len; y++)
                {
                    cout << ans_arr[y] << " ";
                }
                cout << "\n";
            }
            else
            {
                cout << "NO"
                     << "\n";
            }
        }
        else
        {
            cout << "NO"
                 << "\n";
        }

        x++;
    }

    return 0;
}