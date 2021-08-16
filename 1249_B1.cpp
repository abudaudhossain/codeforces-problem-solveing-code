#include <bits\stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio (false);
    cin.tie (0);


    int queries_n, kids_n, kids_arry[203], day = 0, i, j, el, in;

    cin >> queries_n;
    while (queries_n--)
    {
        cin >> kids_n;
        for(int k = 0; k < kids_n ; k++)
        {
            cin >> kids_arry [k];
        }
        for(i=0; i < kids_n; i++)
        {
            in = i+1;
           // cout <<in;

            if( kids_arry[i] == in){

                    day = 1;}
            else
            {
               el = kids_arry [i];
              // cout <<el<<kids_n;
                for(j = 0; j <= kids_n; j++)
                {
                   // cout  <<el-1;
                    if(kids_arry [el-1] == in)
                    {
                        day = j+2;
                        break;
                    }
                    else el = kids_arry[el-1];
                }
            }
            cout << day <<" ";

        }
        cout <<"\n";
    }



    return 0;
}
