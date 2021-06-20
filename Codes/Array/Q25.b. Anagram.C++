/* Anagram: Approach 2: 
 Here we are taking the array of 256 size and initialize the value of all thre places as 0
 
 Then we will find the asci value of the charcter of first string and that index (i.e asci value will be the index) 
 in the array we will replace '0' by '1'.

 Then for the second string also we will find the asci value of each character and at that index we will if we find '1'
 we will replace it with '0' and if we find '0' then we will reolace it with '1'.

 At the end we will check if our array contain all '0's in it - 
 then given two strings are anagram else they are not   */ 

#include<bits/stdc++.h>
#include<cstring>
using namespace std;

bool IsAnagram(string s1, string s2){
	vector<int> dic(256,0);
	// for(int i=0; i<dic.size();i++) 
	// 	cout<<dic[i];
	int n1= s1.size();
	int n2= s2.size();

	int i=0;
	while(i<n1){
		int index=(int)s1[i];
		dic[index]=1;
		i++;
	}
	// for(int i=0; i<dic.size();i++) 
	// 	cout<<" "<<dic[i];


	int j=0;
	while(j<n2){
		int index=(int)s2[j];
		dic[index]=0;
		j++;
	}
	// for(int i=0; i<dic.size();i++) 
	// 	cout<<"  "<<dic[i];

	for(int i=0; i<dic.size();i++){
		if(dic[i]==1) return false;
	}

	
	return true;
}

int main()
{
	string s1="aabbcc";
	
	string s2="bbaacc";

	

	bool result = IsAnagram(s1, s2);

	if (result == false)  cout<<"Provided Strings "<<"( "<<s1<<")"<<" & "<<"( "<<s2<<")"<< " are not Anagrams of each other."<<endl;
	else cout<<"Provided Strings "<<"( "<<s1<<")"<<" & "<<"( "<<s2<<")"<< " are  Anagrams of each other."<<endl;
	return 0;
}