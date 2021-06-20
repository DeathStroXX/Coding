/* Ques.25. Check fpr the anagrams of the given string. Two strings  are said to be anagrams if they contains same 
characters but present at different position
Approach 1
By sorting the strrings and then matching
Time complexity: nlog(n)  */
#include<bits/stdc++.h>
using namespace std;

bool IsAnagram(string str1,string str2){
	int n1= str1.length();
	int n2= str2.length();

	if(n1!=n2) return false; //Base Case

	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());

	int i=0; int j=0;
	while(i<n1 and j<n2){
		if(str1[i] == str2[j]) return true;
		else return false;
		i++;
		j++;
	}

	return false;
}

int main(){
	string str1="bacde";
	string str2= "badec";
	
	// cout<<str1;
	bool input=IsAnagram(str1, str2);
	if(input == 0) cout<<"Provided Strings "<<str1<<" & "<<str2<< " are not Anagrams of each other."<<endl;
	else 			cout<<"Provided Strings "<<str1<<" & "<<str2<< " are  Anagrams of each other."<<endl;
	


}