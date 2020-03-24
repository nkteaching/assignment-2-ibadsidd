#include<iostream>
using namespace std;
int multiply(int a,int b){

		
		if(a==0||b==0){
			return 0;
		}
		else
			return a+multiply(a,b-1);
	
}
int main(){
	cout<<multiply(4,2);
}
