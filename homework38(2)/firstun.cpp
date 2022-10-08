#include <bits/stdc++.h>
using namespace std;
int main() {
    int flag[27] = {0};
    string s;
    int x, occur;
    cin>>s;
    for(int i = 0;i<s.length();i++){
        x = s[i]+1-'a';
        cout<<x<<" ";
        flag[x]++;
    }
    cout<<endl;

    for(int i = 0;i<=25;i++){
        if(flag[i]==1){
            occur = i;
            break;
        }
    }
    for(int i = 0;i<=s.length();i++){
        for(int j = 0;j<26;j++){
            if(s[i]==(occur+'a')){
                cout<<i;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}
