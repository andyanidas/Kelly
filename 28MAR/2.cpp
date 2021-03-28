#include<iostream>

using namespace std;

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	
	if(x>y && x>z){
		cout<<"Max is "<<x;
	}
	
	
	if(z>y && z>x){
		cout<<"Max is "<<z;
	}
	
	
	if(y>z && y>x){
		cout<<"Max is "<<y;
	}
	
	return 0;
}
