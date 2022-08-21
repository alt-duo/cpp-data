#include <bits/stdc++.h>
using namespace std;
int main() {
    string v[1000];
    string s;
    cin>>s;
    while(s!=""){
        
        int i = 0;
        v[i] = s;
        i++;
        cin>>s;
    }
    int z = sizeof(v)/sizeof(v[0]);
    sort(v,v+z);
    for(int i = 0;i<z;i++){
        cout<<v[i]<<" ";
    }
}
