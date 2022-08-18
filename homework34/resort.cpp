#include <bits/stdc++.h>
using namespace std;

int main(){
    int first, second, nums;
    cin>>first, second;
    int counting[first];
    for(int i = 0;i<first;i++){
        counting[i] = 0;
    }
    int arr1[first], arr2[second];
    for(int i = 0;i<first;i++){
        cin>>arr1[i];
        counting[arr1[i]]++;
    }
    for(int i = 0;i<second;i++){
        cin>>arr2[i];
    }
    for(int i = 0;i<second;i++){
        nums = counting[arr2[i]];
        for(int i = 0;i<nums;i++){
            cout<<arr2[i]<<" ";
        }
    }

}
