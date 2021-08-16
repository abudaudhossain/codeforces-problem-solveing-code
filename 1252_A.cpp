#include<bits\stdc++.h>
#include <algorithm>

using namespace std;
bool comp(int a, int b){
 return (a < b);
}
int main () {

 int n, i;
 cin >> n;

 int in_arry [n];
 for (i = 0; i < n; i ++){
    cin >> in_arry[i];
 }
 int* max_ele;
 max_ele = std::max_element( in_arry, in_arry + n, comp);

 int a = *max_ele;
 for(i = 0; i < n; i++)
 {
     cout << (a - in_arry[i]) + 1 <<" ";
 }


 return 0;
}
