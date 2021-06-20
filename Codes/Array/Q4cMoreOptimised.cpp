// here we are solving the previous Q4 using Kadane Alogrithm
#include<iostream>
using namespace std;

int MaxSubArraySum(int arr[], int n){
	int sum_till_now=0;
	int max_positive_sum_till_now=0;
	for(int i=0; i<n; i++){
		sum_till_now= sum_till_now+ arr[i];
		
		if(sum_till_now<0) sum_till_now=0;

		else if(max_positive_sum_till_now < sum_till_now)  max_positive_sum_till_now = sum_till_now;

		
	}
    return max_positive_sum_till_now;

}	

int main(){
  int arr[]={1,2,3,-4,-5,-6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int output;
  output = MaxSubArraySum(arr, n);
  cout <<output<<endl;
}