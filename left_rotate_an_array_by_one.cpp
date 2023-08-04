#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v = {1, 2, 3, 4, 5};
	int n = v.size();

	vector<int> temp(n);	
	for(int i = 1; i < n; i++){
		temp[i - 1] = v[i];
	}

	temp[n-1] = v[0];

	

	for(int i = 0; i < n; i++){
		v[i] = temp[i];
	}

	for(int i = 0; i < n; i++){
		return v;
	}
	return 0;
}