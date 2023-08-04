#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> arr = {1, 2, 4, 7, 7, 5};

	int max = INT_MIN;	
	int secMax = INT_MIN;
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] > max){
			secMax = max;
			max = arr[i];
		}
		else if(arr[i] > secMax && arr[i]!=max){
			secMax = arr[i];
		}
	}

	cout<<secMax<<endl;
	return 0;
}