#include<iostream>
using namespace std;
void cube(int n){
	static int i=1;
	if(i<=n){
		cout<<i*i*i<<" ";
		i++;
		cube(n);
	}
}
int main(){
	cube(4);
}
