// Print the indexes which coresponds to the maximum sum
#include<iostream>
using namespace std;

int MaxSumIndex(int arr[], int n){
	vector<int> index;
	int CurrentSum = arr[0]; //storing the first array elemen
	int MaxSum = CurrentSum;

	for(int i=0; i<n; i++){
		CurrentSum=max(arr[i],CurrentSum+arr[i]);

		if(CurrentSum>MaxSum)
			MaxSum=CurrentSum;
			index.push(i);

	}
	return index;
}

int main(){
  int arr[]={-1,-2,-7,-3,-4,-5,-6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int output;
  output = MaxSubArraySum(arr, n);
  for(int i=0;i<index.size();i++)
  	cout<<index;
}