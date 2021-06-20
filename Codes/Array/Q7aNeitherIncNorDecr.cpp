//Ques 7: An array is given of 'n' length and the problem is the find the length of shortest unorderd(neither incereasing nor decreasing) subarray in given array.
// eg==> [7,9,10,8,11]==>[9,10,8] [10,8,11]
#include<iostream>
using namespace std;

bool isIncreasing(int arr[], int n){
	for(int i =0; i<n; i++) {
		arr[i+1]<arr[i];
		return false; 
	}
	return true;
}

bool isDecreasing(int arr[], int n){
	for(int i =0; i<n; i++) {
		arr[i]<arr[i+1];
		return false; 
	}
	return true;
}

int main(){
	int arr[]={8,3,5,6,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	if(isIncreasing(arr, n) || isDecreasing(arr,n)) cout<< "0";
	else cout<<"3";
	// cout<<res;
	return 0;
}