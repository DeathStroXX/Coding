#include<bits/stdc++.h>
using namespace std;

int MaxSum(int arr[], int n){
  int k =4;
  int max_sum = INT_MIN;

  for(int i=0; i<n-k+1; i++){ //here we r taking n-k-1 as for example there are 9 elements in an array
    // then we will run loop till from 0 to 8 by common understanding of index but due the k i.e here k=4
    // we will substract the value of k from n so that the other loop for j do not get invalid
    // becoz at every iteration of i , j should able to run till j<k i.e if n=9
    // indexes 0 1 2 3 4 5 6 7 8 if i =0 ,j=0 1 2 3 4 provided k=4
    // if i=1, j = 1 2 3 4
    // if i= 2 , j= 2 3 4 5
    //.......
    //if i= 5 , j= 5 6 7 8
    //if value of i further increaese the value of j will exceed the maximum possible value of index
    // so we have to limit maximum value of i till that's why i<n-k i.e 9-4= 5 but here value of i
    // will be less than 5 i.e 0,1,2,3,4 hecne to get the value of i from 0-5  indexing
    // indexing adjustment and hence i<n-k+1

    int current_sum=0; // it should be defined in inner loop so that it always start new
    //sum for every iteration
    for(int j=0; j<k; j++){
          current_sum = current_sum+ arr[i+j]; //adding the values under k=4
             cout<<current_sum<<" ";

    max_sum = max(current_sum ,max_sum);}
  }

  return max_sum;
}
int main(){



  int arr[]={2,4,6, 7,8,9,3,1,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int max_sum = MaxSum(arr, n);
  cout<<"The maximun sum for the given value of k is: "<<max_sum<<endl;
}
