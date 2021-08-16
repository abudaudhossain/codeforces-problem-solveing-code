#include<bits/stdc++.h>
using namespace std;

string s = "aeiou";

int main() {
    int k;
    cin>>k;

    for (int i=5; i*i<=k; i++) {
        if (k%i)    continue;

        int n = i, m = k/i;

        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++)
                cout<<s[(i+j)%5];

        }
        return 0;
    }
    cout<<-1<<endl;
    return 0;
}
