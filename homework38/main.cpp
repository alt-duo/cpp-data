#include <bits/stdc++.h>
using namespace std;
int a1[1000000]={0};
void  multiplybig(int biga[],int scalarb){
    int pos;
    for (int i=1;i<=biga[0];i++) 
        biga[i]*=scalarb;
    for (int i=1;i<=biga[0];i++){
        biga[i+1]+=biga[i]/10;
        biga[i]%=10;
    } 
    biga[0]++;
    while (biga[biga[0]]/10!=0) {
        biga[biga[0]+1]=biga[biga[0]]/10;
        biga[biga[0]]%=10;
        biga[0]++;
        
    }
    return;
    
}
int main() {
    int n;
    string s;
    cin>>s>>n;
    for(int i = s.length()-1;i>=0;i--){
        a1 = s[i];
    }
    for(int i = 0;i<s.length();i++){
        
    }
}
