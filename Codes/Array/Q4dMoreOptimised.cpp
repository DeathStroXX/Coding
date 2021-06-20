// In thus we are considering the case when all the elements of the given araay are -ve
#include<iostream>
using namespace std;

int MaxSubArraySum(int arr[], int n){
	int CurrentSum = arr[0]; //storing the first array elemen
	int MaxSum = CurrentSum;

	for(int i=0; i<n; i++){
		CurrentSum=max(arr[i],CurrentSum+arr[i]);

		if(CurrentSum>MaxSum)
			MaxSum=CurrentSum;
	}
	return MaxSum;



}
int main(){
  int arr[]={-1,-2,-7,-3,-4,-5,-6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int output;
  output = MaxSubArraySum(arr, n);
  cout <<output<<endl;
}