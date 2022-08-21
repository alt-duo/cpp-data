#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int len = s.length();
    int lettercnt[27] = {0};
    int hi = 0;
    for(int i = 0;i<len;i++){
        lettercnt[s[i]-'a']++;
    }
    for(int i = 0;i<27;i++){
        if(lettercnt[i]>hi){
            hi = lettercnt[i];
        }
    }
    cout<<hi;
    return 0;
}