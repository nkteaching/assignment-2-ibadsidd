#include<iostream>
using namespace std;
void print_odd(int n){
	static int i=0;
	if(i!=n){
		
		if(i%2!=0){
			cout<<i<<" ";
		}
		print_odd(i+1);
	}
}
int main(){
	print_odd(4);
}
