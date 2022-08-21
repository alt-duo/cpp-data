#include <bits/stdc++.h>
using namespace std;

int main(){
    int first, second, nums;
    cin>>first>>second;
    int counting[first];
    for(int i = 0;i<first;i++){
        counting[i] = 0;
    }
    int arr1[101];
    int arr2[101];
    for(int i = 0;i<first;i++){
        cin>>arr1[i];
        counting[arr1[i]]++;
    }
    for(int i = 0;i<second;i++){
        cin>>arr2[i];
    }
    for(int i = 0;i<second;i++){
        nums = counting[arr2[i]];
        for(int j = 0;j<nums;j++){
            cout<<arr2[j]<<" ";
        }
    }

}