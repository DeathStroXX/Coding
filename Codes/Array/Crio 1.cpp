#include <bits/stdc++.h>
using namespace std;

void allPossibleSubset(string s1, int n)
{
    int count = pow(2, n);
    // The outer for loop will run 2^n times to print all subset .
    // Here variable i will act as a binary counter
    for (int i = 0; i < count; i++) {
        // The inner for loop will run n times , 
        // As the maximum number of elements a set can have is n
        // This loop will generate a subset
        for (int j = 0; j < n; j++) {
            // This if condition will check if jth bit in 
            // binary representation of  i  is set or not
            // if the value of (i & (1 << j)) is not 0 , 
            // include arr[j] in the current subset
            // otherwise exclude arr[j]
            if ((i & (1 << j)) != 0)
                cout << s1[j];
        }
        cout << "\n";
    }
}

int main()
{
    string s1 = "abcd";
    int n = s1.size();
    
    

 

    allPossibleSubset(s1, n);

    return 0;
}