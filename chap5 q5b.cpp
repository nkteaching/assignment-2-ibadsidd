#include<iostream>
using namespace std;
void print_odd(int n){

		
		if(n%2!=0){
			cout<<n<<" ";
		}
		if(n!=1)
		print_odd(n-1);
	
}
int main(){
	print_odd(4);
}
