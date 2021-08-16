#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, ans;
    cin >>n;
    for( int i = sqrt(n); i > 0; i++ )
    {
        if(n % i == 0)
        {
            int a = n / i;
            ans = 2 * (a+i);
            break;
        }
    }

    cout << ans ;
    return 0;
}
