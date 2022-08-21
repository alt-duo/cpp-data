#include <bits/stdc++.h>
using namespace std;
int  main() {
    vector<int> v;
    vector<int> b;
    int n, counter = 0;
    cin>>n;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        if(x%2==0){
            v.push_back(x);
        }
        if(x%2==1){
            b.push_back(x);
            counter++;
        }
    }
    sort(v.begin(), v.end(), greater<int>());
    sort(b.begin(), b.end());
    for(int i = 0;i<counter;i++){
        cout<<b.back()<<" ";
        b.pop_back();
    }
    for(int i = 0;i<=v.size();i++){
        cout<<v.back()<<" ";
        v.pop_back();
    }

}
