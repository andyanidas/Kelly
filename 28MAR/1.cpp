#include<iostream>

using namespace std;

int main(){
	int grade,y;
	cout<<"Enter your grade: ";
	cin>>grade;
	
	if(grade>100 || grade<0){
		cout<<"It is not a valid grade points!";
	}else if(grade<=100 && grade>=90){
		cout<<"You get grade A";
	}else if(grade<90 && grade>=80){
		cout<<"You get grade B";
	}else if(grade<80 && grade>=70){
		cout<<"You get grade C";
	}else if(grade<70 && grade>=60){
		cout<<"You get grade D";
	}else{
		cout<<"You get grade F";
	}
	
	return 0;
}
