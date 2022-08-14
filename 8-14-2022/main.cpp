#include <iostream>
using namespace std;
int nums[1001];
int main(){
    freopen("random.in","r",stdin);
    freopen("random.out","w",stdout);
    
    
    int n;
    for(int i = 0; i <= 1000; i++){
        nums[i] = 0;
    }
    cin>>n;
    int x;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(x == 0){
            nums[i+1] = 1;
        }
    }
    for(int i = 0;i<1001;i++){
        if(nums[i] == 1){
            cout<<i<<" ";
        }
    }


}