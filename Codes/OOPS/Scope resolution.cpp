#include<bits/stdc++.h>
using namespace std;

class car{
public: 
	string BMW;
	int id;

	void printname();
	void printid(){
		cout<<"BMW id is: "<<id;
	}


};

void car::printname(){
	cout<<"Car name is "<<BMW;
}
int  main(){
	car obj1;
	obj1.BMW="BMW black";
	obj1.id = 2020;
	obj1.printname();
	cout<<endl;
	obj1.printid();
	return 0;
}