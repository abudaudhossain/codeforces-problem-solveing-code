#include<bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio (false);
  cin.tie(0);
  int n;
  cin >> n;
  while(n--) {
    string s;
    cin >> s;
    int sum = 0;
    bool any_even = false;
    bool any_zero = false;

    for(int j=0; j<s.size(); j++) {
      char c = s[j];
      sum += (int) (c - '0');
      if(c == '0'){
        if(any_zero){
            any_even = true;
        } else {
          any_zero = true;
        }
      } else {
        if (c % 2 == 0) {
          any_even = true;
        }
      }

    }
    if (any_even && any_zero && sum % 3 == 0){
      cout << "red" << '\n';
    } else {
      cout << "cyan" << '\n';
    }
  }

  return 0;
}
