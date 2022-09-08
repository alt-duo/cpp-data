#include <bts/stdc++.h>
using namespace std;
int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int arr1[(a.length()+1)];
    int arr2[(b.length()+1)];
    int result
    int i1 = 0;
    for(int i = a.length();i>=1;i--){
        
        arr1[i] = a[i1];
        i1++;
    }
    i1 = 0;
    arr1[0]=a.length();
    for(int i = b.length();i>=1;i--){
        arr2[i] = b[i1];
        i1++;
    }
    arr2[0]=b.length();
    
}
