#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        int n;
        scanf("%d", &n);
        int nums[n + 3];
        int lim = n / 2;
        int increm = 0;

        if (n % 2 == 1)
        {
            lim = lim + 1;
        }
        for (int i = 0; i < n; i++)
        {
            nums[i] = lim;
            nums[i + 1] = n - increm;
            i++;
            lim = lim - 1;
            increm++;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", nums[i]);
        }
        printf("\n ");
        t--;
    }

    return 0;
}