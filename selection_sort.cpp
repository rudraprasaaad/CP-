#include<iostream>
using namespace std;

int main(){
	int arr[] = {7, 5, 9, 2, 8};

 	int n = sizeof(arr) / sizeof(arr[0]);
	
	int i, j, min_ind;
	
	for(i = 0; i < n; i++){
		min_ind = i;
		for(j = i + 1; j < n; j++){
			if(arr[j] < arr[min_ind])
				min_ind = j;
		}
		swap(arr[min_ind], arr[i]);
	}

	

	for(int i=0; i < n; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}