#include <bits/stdc++.h>
#define max_digits 18000
using namespace std;
int a1[max_digits] = {0};
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
int main(){
    long long m;
    string a;
    a = to_string(m);
    string s = "";
    int n, counter, last;
    cin>>m>>n;
    for(int i = a.length()-1;i>=0;i++){
        a1[i]=(a[i]-'0');
    }
    for(int i = 0;i<n;i++){
        counter = 1;
        for(int j = a.length()-1;j>=0;j++){
            for(int k = 0;k<10000000;k++){
                a1[k] = a1[k]*(counter*10);
                while(a1[k]>=10){
                    a1[k] = a1[k]-10;
                    a1[k+1]++;
                }
            }
            counter++;
        }
    }
    for(int i = 0;i<1000000;i++){
        if(a1[i]!=0){
            last = i;
        }
    }
    if(last<500){ 
        for(int i = 0;i<500;i++){
            s = s+to_string(a1[i]);
        }
    }
    else{
        for(int i = last-500;i<last;i++){
            s = s+to_string(a1[i]);
        }
    }
    cout<<s;
}
