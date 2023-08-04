#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 5, 6, 7};
	int n = v.size();

	int k = 3;

	k = k % n;

	for(int i = 0; i < n; i++){
		if(i < k){
			cout<<v[n+i-k]<<" ";
		}
		else{
			cout<<v[i-k]<<" ";
		}
	}
	return 0;
}	