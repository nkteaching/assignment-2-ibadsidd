#include<iostream>
using namespace std;
string dec2b();
int N, b;
int rem =0;
int main(){
    cout<<"please input a decimal positive number: "; cin>>N;
    cout<<"please input the desired base: "; cin>>b;
    string s = dec2b();
    cout<<'"'<<N<<'"'<<" in base-10 system = \""<<s<<"\" in base-"<<b<<"system"<<endl;
    return 0;
}

string dec2b()
{
    string s = ""; 
        while(N>0)
        {

            if (b==16)
            {
                rem = N%b;
                if (rem>9)
                {
                    switch (rem)
                    {
                        case 10: s= "A" + s; break;
                        case 11: s= "B" + s; break;
                        case 12: s= "C" + s; break;
                        case 13: s= "D" + s; break;
                        case 14: s= "E" + s; break;
                        case 15: s= "F" + s; break;
                    }
                }
                else
                {
                    s = char(rem+48) +s;
                }
            }
            else
            {
                rem = N%b;
                s = char(rem+48) +s;
            }
        N = N/b;
        }
    if (s=="")
    {cout<<"";}
    else 
    {cout<<s; }

    return s;
}
