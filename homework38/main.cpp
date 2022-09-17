#include <bits/stdc++.h>
using namespace std;

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
    int a1[500]={0};
    long long j, n, temp1, last;
    int a, x;
    string s;
    string ans;
    cin>>s>>n;
    a1[0] = 500;
    for(int i = s.length();i>=1;i--){

        a1[i] = s[i-1]-'0';
    }
    for(int q = 0;q<n;q++){
        for(int j = s.length()-1;j>=0;j--){
            a = s[j]-'0';

            while(a*(x*10)>=10){
                for(int j = 0;j<=499;j++){
                    temp1 = a1[j+1];
                    a1[j] = a1[j+1];
                }
                a1[0] = 0;
                a=a-10;
            }
            multiplybig(a1, a);
            x++;
        }
    }
    for(int i = 1;i<=499;i++){
        if(a1[i]!=0){
            last = i;
        }
    }
    if(last<=500){
        for(int i = 1;i<500;i++){
            ans = ans+to_string(a1[i]);
        }
    }
    else{
        for(int i = last-499;i<=last;i++){
            ans = ans+to_string(a1[i]);
        }
    }
    cout<<stoll(ans);
}
