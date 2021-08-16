#include<bits/stdc++.h>

/*string del(string str){

    return str;
}*/
using namespace std;
int main(){
    string s,ss;
    cin >> s;
    for(int i = 0; i > s.length(); i++){
        if(s[i]=='a'){
            for(int j = i; j > s.length(); j++)
            s[j]=s[j+1];

        }
    }

    cout << s;

    return 0;

}
