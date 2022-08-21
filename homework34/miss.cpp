#include <bits/stdc++.h>
using namespace std;
int main() {
    int range1, current;
    cin>>range1;
    int array[range1+1] = {0};
    for(int i = 1;i<=range1;i++){
        cin>>current;
        if(current >= 1){
            array[current]++;
        }
    }
    for(int i =1;i<range1;i++){
        if(array[i]==0){
            cout<<i<<endl;
            return 0;
        }
    }
    
}