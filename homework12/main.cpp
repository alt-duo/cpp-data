#include<bits/stdc++.h>
using namespace std;
string removespace(string s){
    string temp;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' '){
            temp+=s[i];
        }
    }
    return temp;
}
int main(){
    bool found = false;
    string s;
    stack <int> m;
    cin>>s;
    for(int i = 0;i<s.length();i++){
        s[i] = tolower(s[i]);
    }
    int temp1 = s.length();

    found = false;
    for(int j = 0;j<temp1;j++){
        if(s[j]==s[j+1]){
            found = true;
            s[j] = ' ';
            s[j+1] = ' ';
            temp1 = temp1-2;
            s = removespace(s);
        }


    }
    if(found = false){
        cout<<"-1"<<endl;
    }


    return 0;
}