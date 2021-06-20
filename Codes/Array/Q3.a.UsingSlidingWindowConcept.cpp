#include<iostream>
using namespace std;
//In this approach using the concept of sliding window
int MaxSum(int arr[], int n){
  int k=4;
  // base cases
  if(n<k) return false;

  int max_sum=0;
  for(int i = 0; i<k;i++) {max_sum+=arr[i];}
  // cout<<max_sum<<endl;
  int window_sum= max_sum;//storing the sum of first 'k' elements on window
  for(int i=k; i<n; i++){
    window_sum= window_sum + arr[i]- arr[i-k];
    // cout<<"a"<<window_sum<<endl;
    //here we adding the '(k+1)th' element through arr[i] and decreasing the sum '(k-1)th'--
    //--through arr[i-k]
      max_sum = max(max_sum, window_sum );
      // cout<<max_sum<<endl;
    }
    return max_sum;
}

int main(){

//   #ifndef ONLINE_JUDGE
//     // for getting input from input.txt
//     freopen("input.txt", "r", stdin);
//     // for writing output to output.txt
//     //this can be opted out if you want to print the output to the sublime console
//     freopen("output.txt", "w", stdout);
// #endif

  int arr[]={2,9,7,7}
  int n= sizeof(arr)/sizeof(arr[0]);
  // int b;
  // cin>>b;
  // cout<<b;
  int max_sum= MaxSum(arr,n);

  cout<<max_sum<<endl;
}
