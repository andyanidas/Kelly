#include<iostream>

using namespace std;


int main(){
	int n;
	cin>>n; //5
	
	for(int j = 0; j<n; j++){
		for(int i = 0; i<n; i++){
			if(j==0 || j==n-1 || i==0 || i==n-1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}

