#include<bits/stdc++.h>
using namespace std;

int PossibleTriangles(int arr[], int n){

	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"  ";
	}

	int count=0;
	int sum =0;
	for(int i=n-1; i>0;i--){//here i is the end pointer which keeps on shifting backwards
		int start = 0;
		int PreEnd = i-1;
		while(PreEnd > start){
			if (arr[start] + arr[PreEnd] > arr[i] ){ 
				count +=  (PreEnd-start); 
				PreEnd-=1;
			}
					// cout<<count<<"aa";
			else{ 
				start+=1;
			}
			// count=sum;	
				// cout<<count<<"aa";
	}		// cout<<count;
	} 
	return count;
}

int main(){
	int arr[]={4, 6, 3, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int TotalNumberOfTriangles = PossibleTriangles(arr, n);
	cout << " \nTriangles Formed:"<<TotalNumberOfTriangles;
	
}