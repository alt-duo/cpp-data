#include <bits/stdc++.h>
using namespace std;
int main() {
	int max = 0;
	int sum = 0;
	int flag[1001] = {0};
	int n;
	cin>>n;
	for(int i = 0;i<n*2;i++){
		int x;
		cin>>x;
		flag[x]++;
	}
	vector<int> v;
	for(int i = 1;i<=1000;i++){
		if(flag[i]%2==1){
			v.push_back(i);
		}
	}
	for(int i = v.size()/2;i>0;i--){
		int x = v[i*2-1]-v[i*2-2];
		if(x>max){
			max = x;
		}
		sum += x;
	}
	cout<<sum-max;
	return 0;
}
