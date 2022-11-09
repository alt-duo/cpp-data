#include <bits/stdc++.h>
using namespace std;
int main() {
    bool found;
    int n, q;
    cin>>n>>q;
    string list1[n];
    string list2[q];
    for(int i = 0;i<n;i++){
        cin>>list1[i];
    }
    for(int i = 0;i<q;i++){
        cin>>list2[i];
    }
    for(int i = 0;i<q;i++){
        found = false;
        for(int j = 0;j<n;j++){
            if(list1[j]==list2[i]){
                cout<<j+1<<endl;
                found = true;
                break;
            }
        }
        if(!found){
            cout<<"-1"<<endl;
        }
    }
}
