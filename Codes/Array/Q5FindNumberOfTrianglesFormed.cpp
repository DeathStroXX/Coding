//Finding the number of possible triangles the can be formed from the elements in the given array


#include<iostream>
using namespace std;


int NumberOfTringles(int arr[],int n){
	int count = 0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			for(int k=j+1; k<n;k++)
				if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[k]+arr[j]>arr[i])
					count++;
	return count;
}
int main(){

	#ifndef ONLINE_JUDGE
		freopen(“input.txt”, “r”, stdin);
		freopen(“output.txt”, “w”, stdout);
	#endif

	int arr[]={1,2,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int numberOfPossibleTriangle= NumberOfTringles(arr,n);
	cout <<numberOfPossibleTriangle<<endl;
}