#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> myq; 
    int total =0;
    int n;
    cin>>n;
    int starting = n;
    while(total!=starting){
        for(int i = 2;i<n;i++){
            if(n%i==0){
                n=n/i;
                myq.push(i);
                total = total + i;
                break;
            }
        }
    }
    while(!myq.empty()){
        cout<<myq.front();
        myq.pop();
        if(myq.size()!=1){
            cout<<"*";
        }
    }
}