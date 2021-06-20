#include<iostream>
using namespace std;

class Example{

private: 
	int val;

public: 
	void int_val(int v);
	void print_val();

};

void Example :: int_val(int v){
	val = v;
}

void Example :: print_val(){
	cout<<"Value*: "<<val<<endl;
}

int main(){
	Example ex;
	ex.int_val(50);
	ex.print_val(); 
	return 0;

}