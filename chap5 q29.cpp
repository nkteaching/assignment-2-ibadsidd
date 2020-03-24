#include<iostream>
using namespace std;
void nontail(int i){
	if(i>0){
		nontail(i-1);
		cout<<i<<" ";
		nontail(i-1);
		
	}
}
int main(){
	nontail(4);
}
