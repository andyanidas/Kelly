#include<iostream>

using namespace std;

int main(){
	int a = 15,b = 19, c = 188;
	
	if(a>b){
		if(a>c){
			cout<<"a is greatest!";
		}else{
			cout<<"c is the greatest number!";
		}	
	}else{//here i know that my b>a
		if(b>c){
			cout<<"b is the greatest number!";
		}else{
			cout<<"c is the greatest number!";
		}
		
	}
	/*hints for homeworks
	3. if number is eqaul to 0 then it is 0
	4. if(num%5==0){
			this means num is divisible by 5
	   }else{
	   		this means number is not divisible by 5
	   }
	*/
	
	
	
	return 0;
}
