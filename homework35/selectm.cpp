#include <iostream>
using namespace std;
int main() {
  int n, m, counter = 0;
  cin>>n>>m;
  int nums[n];
  for(int i = 0;i<n;i++){
    cin>>nums[i];
  }
  for(int starting = 0; starting<n;starting++){
    for(int first = starting;first<=n-1;first++){
      for(int second = first+1;second<=n;second++){
        if(nums[first]+nums[second]==m){
          counter++;
        }
      }
    }
  }
  cout<<counter;

}
//5 7 5 2 3 4 1