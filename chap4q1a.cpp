#include <iostream> 
using namespace std; 
#define MAX 1000 
class Stack { 
	int top; 
public: 
	int a[MAX];

	Stack() { top = -1; } 
	void push(int x) 
	{ 
		if (top >= (MAX - 1)) { 
			cout << "stack full"; 
	 
		} 
		else { 
			a[++top] = x; 
			cout << x << " pushed into stack\n"; 
	 
		} 
	} 

	int pop() 
	{ 
		if (top < 0) { 
			cout << "Stack empty"; 
			return 0; 
		} 
		else { 
			int x = a[top--]; 
			return x; 
		} 
	} 
	int peek() 
	{ 
		if (top < 0) { 
			cout << "Stack is Empty"; 
			return 0; 
		} 
		else { 
			int x = a[top]; 
			return x; 
		} 
	} 

	bool isEmpty() 
	{ 
		return (top < 0); 
	}

	void reverse(Stack* s,Stack* s1,Stack* s2){
		while(!s->isEmpty())
		s1->push(s->pop());
		while(!s1->isEmpty())
		{
			s2->push(s1->pop());
		}
		cout<<"after reverse"<<endl;
		
		while(!s2->isEmpty())
		s->push(s2->pop());
		
	
		
	}
}; 


int main() 
{ 
 Stack s1,s2,s3; 
	s1.push(10); 
	s1.push(20); 
	s1.push(30);
	s1.reverse(&s1,&s2,&s3); 
	while(!s2.isEmpty())
	cout << s2.pop() << " Popped from stack\n"; 

}
 

