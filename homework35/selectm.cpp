#include <iostream>
using namespace std;
int main() {
    
    int n, m, starting = 0, temp, counter = 0;
    cin>>n>>m;
    int list1[n];
    for(int i = 0;i<n;i++){
        cin>>temp;
        list1[i] = temp;

    }
    for(int i = 0;i<(n-1);i++){
        for(int j = i+1;j<n;j++){
            if(list1[i]+list1[j]==m){
                counter++;
            }
        }
    }
    cout<<counter;
}
