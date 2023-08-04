#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {1, 2, 2, 3, 3, 3, 4, 4, 5, 5};

	int n = v.size();

	for(int i = 0; i < n - 1; i++){
		if(v[i]==v[i+1]){
			v[i]^=v[i+1];	
		}
	}

	for(auto it : v.begin(); it!=v.end() - 1; it++){
		
	}

	for(int i = 0; i < n; i++){
		cout<<v[i]<<" ";
	}
} 