#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> myq; 
    int total =1;
    int n;
    cin>>n;
    int starting = n;
    while(total!=starting){
        for(int i = 2;i<=n;i++){
            //cout<<" i: "<<i<<" total: "<<total<<endl;
            while(n%i==0){
                n=n/i;
                myq.push(i);
                total = total * i;
                //cout<<" i: "<<i<<" total: "<<total<<endl;
            }
        }
    }
    while(!myq.empty()){
        cout<<myq.front();
        myq.pop();
        if(myq.size()>0){
            cout<<"*";
        }
    }
}
