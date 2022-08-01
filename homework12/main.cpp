#include<bits/stdc++.h>
using namespace std;
int main(){
    bool found = false;
    string s, t, last;
    char temp1;
    stack <char> m;
    cin>>s;
    t = s;
    for(int j = 0;j<t.length();j++){
        s[j] = tolower(s[j]);
    }
    for(int i = 0;i<s.length();i++){
        if(s[i]==m.top()){
            m.pop();
        }else{
            m.push(t[i]);
        }
    }
    while(m.empty()==false){
        last = m.top()+last;
        m.pop();
        cout<<last;
    }
    if(m.empty()){
        cout<<-1<<endl;
    }
    
    
    return 0;
}
//Segmentation fault cpp