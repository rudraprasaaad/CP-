#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> nums = {9,6,4,2,3,5,7,0,1};

	int n = nums.size();
	map<int, int> mp;

	for(int i = 0; i <=n; i++){
		mp[nums[i]]++;
	}	

	for(auto it : mp){
		int mis = it.second;
		if(mis == 0){
			 cout<<mis;
		}
	}

	return 0;
}