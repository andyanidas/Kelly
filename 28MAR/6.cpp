#include<iostream>

using namespace std;


int main(){
	int n;
	cin>>n; //5
	
	for(int j = 0; j<n; j++){
		for(int i = 0; i<n; i++){
			if(j>=i){
				cout<<"*";
			}
		}
		cout<<endl;
	}
	
	return 0;
}

