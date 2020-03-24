#include <iostream> 
using namespace std; 
void palindrome_check_sentence(string str) 
{ 
    int static l=0;
	int static h = str.length()-1; 
   
   if(l==h){
   	
   	cout<<"palindrome"<<endl;
   	
   }
   
    if (l <= h) {
    	 
        if (!(str[l] >= 'A' && str[l] <= 'Z')) 
        {
		
		    l++;
			palindrome_check_sentence(str);	 
   		}
        
        else if (!(str[h] >= 'A' && str[h] <= 'Z')) 
        {
        	h--; 
            palindrome_check_sentence(str);
		}
        else if (str[l] == str[h])
		{
			
        	l++;
			h--; 
            palindrome_check_sentence(str);
		
		} 
    
        else
            cout<<"no palindrome"; 
       
    }
     

} 

int main() 
{ 
    string str = "Ebad ur rehman"; 
    for (int i = 0; i < str.length(); i++) 
        str[i] = toupper(str[i]); 
   
    palindrome_check_sentence(str);  
    return 0; 
} 
