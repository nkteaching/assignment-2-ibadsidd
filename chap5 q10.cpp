#include<iostream>
using namespace std;
float add(int n,float sum,int i){
		
		if(i>=n){
			return sum;
		}
		else if(i%2==0)
		{
			sum=sum+1/i;
			add(n,sum,i+1);
		}
		else{
			sum=sum-1/i;
			add(n,sum,i+1);
			
		}
	
}
int main(){
	cout<<add(4,0,0);
}
