#include <iostream> 
using namespace std; 
void palindrome_check_word(string str) 
{ 
    int static l=0;
	int static h = str.length()-1; 
   
   if(l==h){
   	
   	cout<<"palindrome"<<endl;
   	
   }
   
    if (l <= h) {
    	 
        
        if (str[l] == str[h])
		{
			
        	l++;
			h--; 
            palindrome_check_word(str);
		
		} 
    
        else
            cout<<"no palindrome"; 
       
    }
     

} 

int main() 
{ 
    string str = "madam";
    palindrome_check_word(str); 
	
    
    return 0; 
} 
