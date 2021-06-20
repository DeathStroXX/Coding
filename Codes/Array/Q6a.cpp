//Ques 6: Print the largest element then smallest element , then second largest element then ssecond smallest element ans so on....
// eg, [3,2,4,5,6,9,7] ==>[9,2,7,3,6,4,5]
#include<bits/stdc++.h>
using namespace std;

void alternate(int arr[], int n){
	sort(arr, arr+n);
	int i=0;
	int j  = n-1;
	while (j>i){
		cout<<" "<<arr[j--];
		cout<<" "<<arr[i++];
	}
	if(n%2!=0) 
		cout<<" "<<arr[i];

}

int main(){
	int arr[]={2,3,5,6,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	alternate(arr, n);
	return 0;	
}
