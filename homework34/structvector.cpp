#include <bits/stdc++.h>
using namespace std;
struct s{
    int a;
    int b;
    };
bool mycmp(s x,s y){
    
    if(x.a==y.a){
    return x.b<y.b;
    }
    return x.a<y.a;
}
int main() {
    
    int n;
    cin>>n;
    vector<s> v(n); 
    for(int i = 0;i<n;i++){
        cin>>v[i].a>>v[i].b;
    }
    sort(v.begin(),v.end(),mycmp);
    for(int i=0;i<n;i++){
    cout<<v[i].a<<" "<<v[i].b<<endl;
    }
    return 0;
}
