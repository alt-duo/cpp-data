#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int len = s.length();
    int lettercnt[27] = {0};
    for(int i = 0;i<len;i++){
        lettercnt[s[i]-'a']++;
        if(lettercnt[s[i]-'a']>1){
            cout<<"-1";
            return 0;
        }
    }
    for(int i = 1;i<=26;i++){
        
    }
    cout<<1;
}