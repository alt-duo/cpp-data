#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int flag[26] = {0};
    vector<char> v;
    for(int i = 0;i<s.length();i++){
        flag[s[i]-'a']++;
    }
    for(int i = 0;i<=25;i++){
        if(flag[i]==1){
            v.push_back(char('a'+i));
        }
    }
    cout<<endl;
    for(int i = 0;i<s.length();i++){
        for(int j = 0;j<v.size();j++){
            if(s[i]==v[j]){
                cout<<i+1;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}
