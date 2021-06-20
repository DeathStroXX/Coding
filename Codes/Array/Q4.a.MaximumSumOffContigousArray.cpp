#include<bits/stdc++.h>

using namespace std;
int MaxSubArraySum(int arr[], int n){
  int max_sum = INT_MIN;

  for(int i=0; i<n; i++){
        int sub_sum=0;
          for(int j=0; j<n;j++){
            sub_sum =sub_sum+arr[j];
            // cout<<sub_sum<<endl;
              if(max_sum<sub_sum){
                max_sum = sub_sum;
                cout<<max_sum<<"aa"<<endl;
              }

}

}return max_sum;
}


int main(){
  int arr[]={1,2,3,4,5,-6};
  int n = sizeof(arr)/sizeof(arr[0]);
  int output;
  output = MaxSubArraySum(arr, n);
  cout <<output<<endl;
}
