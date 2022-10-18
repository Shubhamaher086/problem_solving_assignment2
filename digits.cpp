//Write a program to accept a string and check if all the characters in the string are digits.
#include<iostream>
using namespace std;

bool is_valid(string str ,int n)                     //use boolean function to check whether string contain only numbers 
{
    for(int i=0;i<str.length();i++)
    {
        if(!(str[i]>='0'&& str[i]<='9'))
        {
        return false;
        }   
    }
    return true;
}

int main()
{
    string str;                                       //declare string str

    cout<<"Enter the string to check : ";
    cin>>str;                                          //accept the string to check
    int n=str.length();
    if(is_valid(str,n))                                 //check string on result return from boolean function
    {
        cout<<"\nAll characters of string "<<str<< " are only digits "<<endl;
       
    }
    else
    {
        cout<<"\nAll characters of string "<<str<<" are not only digits"<<endl;
        
    }
    return 0;
}