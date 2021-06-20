#include<iostream>
using namespace std;

int MissingNumber(int nums[],int n)
 {
    //  since one number is missing from the given array of n natural numbers, hence for finding the total number of elements--
    // --which are actally present on the array will be n+1 hence for findin the sum of all natural numbers by formula (n)*(n+1)/2 we actually--
    // --have to use (n+1)*(n+1+1)/2
    int TotalSum = (n+1)*(n+2)/2;
    for(int i=0; i<n;i++)
        TotalSum-= nums[i];
    return TotalSum;

}
    int main(){

    int nums[]={1,3,4,5,6,7};
    int a = sizeof(nums)/sizeof(nums[0]);
    int missing = MissingNumber(nums,a);
    // for(int i=0; i<a;i++){
     cout<<missing;


}
