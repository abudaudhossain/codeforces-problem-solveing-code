#include<bits/stdc++.h>
using namespace std;

int main(){
 int n, max_exactly_p, i, j;
 cin >> n;
 int arr_p[n];
 for (i =0; i < n; i++)
 {
     cin >>arr_p[i];
 }
 if(arr_p[n-1] >= n)
 {
     max_exactly_p = n;
 }
 else
    max_exactly_p = arr_p[n-1];
 for(i = n-1; i >= 0; i--)
 {
     if( arr_p[i] > i+1 && i+1 > max_exactly_p)
        max_exactly_p = i+1;
     else if( arr_p[i] < i+1 && arr_p[i] > max_exactly_p)
      max_exactly_p = arr_p[i];
     else if( arr_p[i] == i+1 && i+1 > max_exactly_p)
        {
            max_exactly_p = i+1; break;
        }
      if (max_exactly_p >= i+1) break;
 }

 cout << max_exactly_p << endl;



return 0;
}
