#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        int sz = nums.size();
        if(sz<=2)
            return sz;
        int i = 0;
        int cnt = 1;
        for(int j=1; j<sz; j++){
            if(nums[i]==nums[j]){
                // if(i==j) continue;
                if(cnt<2){
                    i++;
                }
                if(j-i>1){
                    nums[i]=nums[j];
                }
                cnt++;
            }
            else{
                i++;
                nums[i]=nums[j];
                cnt=1;
            }
        }
        return i+1;
}

int main(){
	vector<int> nums = {1,1,1,2,2,3};

	int n = removeDuplicates(nums);
	
	for(int i = 0; i < nums.size(); i++){
		cout<<nums[i]<<" ";	
	}
	
	
	return 0;
}