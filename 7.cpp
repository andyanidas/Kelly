#include<iostream>

using namespace std;

int main(){
	//% -> module operator whill give you remainder
	int x = 15;
	int y = 7;
	int z;
	cout<<x%y;
	
	z = x + y;
	x %= y;
	cout<<x;
	
	
	return 0;
}
