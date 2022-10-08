#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int x, max = 0;
    getline(cin, s);
    for(int i = 0;i<s.length();i++){
        x = s[i]-'a';
        if(max<x){
            max=x;
        }
    }
    cout<<char(max-1+'a');

    
}
