#include<iostream>
using namespace std;

int SetBits(int n){
  int count = 0;
  while(n){
    count += n & 1;
    n>>=1;
  }
  return count;
}
int main(){
  int n = 3;
  // cin>>"Enter the integer">>endl;
  int output;
  output = SetBits(n);
  cout<<output<<endl;
}
