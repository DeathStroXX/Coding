#include<bits/stdc++.h>
using namespace std;

class Box{
public:
	double length;
	double breadth;
	double height;
};

int main(){
	Box objectBox1;
	Box objectBox2;

	double volume=0.0;

	objectBox1.length = 10.2;
	objectBox1.breadth = 6.7;
	objectBox1.height = 2.3;

	objectBox2.length = 39.8;
	objectBox2.breadth = 20.8;
	objectBox2.height = 5.8;

	volume = objectBox1.length * objectBox1.breadth * objectBox1.height ;
	cout<< "Volume of Box 1: "<<volume<<endl;

	volume = objectBox2.length * objectBox2.breadth * objectBox2.height ;
	cout<< "Volume of Box 2: "<<volume <<endl;

return 0;
}