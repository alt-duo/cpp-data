
//second homework
#include <iostream>
using namespace std;
int main() {
    int n;
    
    cin>>n;
    long long total = 1;
    for(int i = 0;i<n-1;i++){
        total = 2*total + 2;
    }
    cout<<total;
    
}