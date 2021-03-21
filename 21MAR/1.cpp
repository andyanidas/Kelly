#include<iostream>

using namespace std;

int main(){
	int num,count=0;
	cout<<"Enter a number: ";
	cin>>num; //123456
	
	for(;num>0;num/=10){
		count++;
	}
	
	
	
	cout<<count;
	
	return 0;
}
