#include <bits/stdc++.h>
using namespace std;

int main() {
    int array1[101];
    int array2[101];
    int n, m;
    int length, speed;
    int maxover;
    int sum = 1;
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        cin>>length>>speed;
        
        for(int j = sum;j<=length+sum-1;j++){
            array1[j] = speed;
        }
        sum+=length;
    }
    sum = 1;
    for(int i = 0;i<m;i++){
        cin>>length>>speed;
        for(int j = sum;j<=length+sum-1;j++){
            array2[j] = speed;
        }
        sum+=length;
    }
    for(int i = 1;i<=100;i++){
        if(array1[i]<array2[i]){
            maxover = array2[i]-array1[i];
        }

    }
    cout<<maxover;
}