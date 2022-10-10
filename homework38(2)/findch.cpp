#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    char ans;
    int total = 0;
    int x, max = 0;
    getline(cin, s);
    for(int i = 0;i<s.length();i++){
        x = s[i]-'a';
        if(max<x){
            max=x;
        }
    }
    ans = char(max-1+'a');
    for(int i = 0;i<s.length();i++){
        if(ans==s[i]){
            total++;
        }
    }
    cout<<ans<<" "<<total;

    
}
