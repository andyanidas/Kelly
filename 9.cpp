#include<iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"Enter a and b:";
	cin>>a>>b;
	
	cout<<"smallest number among "<<a<<" and "<<b<<" is ";
	if(a > b){
		cout<<a;
	}else{
		cout<<b;
	}
	
	
	
	return 0;
}
