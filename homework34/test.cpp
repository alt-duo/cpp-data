#include <iostream>
using namespace std;
struct nums {
  int one;
  int two;
};


int main() {
    vector<subject> sub;
    int first, temp;
    cin>>first;
    for(int i = 0;i<first;i++){
        sub.push_back(nums());
        cin>>temp;
        sub[i].one = temp;
        cin>>temp;
        sub[i].two = temp;
    }
    sort (sub.begin(), sub.end());
    for(int i = 0;i<first;i++){
        temp = sub[i].one;
        cout<<temp;
        temp = sub[i].two;
        cout<<" "<<temp<<endl;
        
    }

}
