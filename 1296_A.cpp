#include <bits/stdc++.h>

using namespace std;
bool odd(int val){
    if(val % 2 !=0) return true;
    else return false;
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int  n, numodd = 0, arr[2050];
      cin >> n;
      for(int j = 0; j < n; j++) {
        cin >> arr[j];
         if(odd(arr[j])) numodd++;
      }

    if(numodd > 0){
        if(odd(numodd)) cout <<"YES" <<endl;
        else if(n > numodd) cout << "YES" <<endl;
        else  cout << "NO"<<endl;
    }else{
        cout << "NO"<<endl;
    }
}
    return 0;
}

