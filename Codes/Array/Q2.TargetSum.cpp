#include <bits/stdc++.h>
using namespace std;

void PrintPairs(int arr[], int arr_size, int TargetSum){
  unordered_set<int> s;
  for(int i=0; i<arr_size; i++){
    int temp= TargetSum - arr[i];

    if(s.find(temp) != s.end()) //this means that temp is present in s.
      cout<<'('<<arr[i]<< ',' <<temp<<')'<<endl;

    s.insert(arr[i]);

  }

}

int main() {
  int arr[] = {1,2,4,5,9,7};
  int TargetSum = 14;
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  PrintPairs(arr, arr_size, TargetSum);

  return 0;
}
