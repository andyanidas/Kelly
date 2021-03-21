#include<iostream>

using namespace std;

int main(){
	int num,rev=0,temp;
	cout<<"Enter a number: ";
	cin>>num; //123456
	temp = num;
	for(;temp>0;temp/=10){
		rev = rev*10 + temp%10; //6*10 +5 = 65*10+4 = 654
	}
	cout<<rev;
	
	
	
	return 0;
}
