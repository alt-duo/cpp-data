#include <iostream>
using namespace std;
int main() {
    freopen("crossroad.in", "r", stdin);
    freopen("crossroad.out", "w", stdout);
    int n, ob, id, counter = 0;
    cin>>n;
    int numbers[11] = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    for(int i = 0;i<n;i++){
        cin>>id>>ob;
        if(numbers[id]==2){
            numbers[id] = ob;
        }else if(numbers[id]!=ob){
            counter++;
            numbers[id] = ob;
        }
    }
    cout<<counter;
}