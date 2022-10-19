//Write a program to accept a string and convert all its characters to upper case.

#include <iostream>
using namespace std;
int main()
{

    string str;

    cout << "Enter a string : ";
    getline(cin, str);                              //Accept and read the string

    for (int i = 0; i < str.length(); i++)          //traverse the string
    {
        if(str[i]>='a' || str[i]>='z')              //check for lower case are available or not
    {
        str[i] = str[i]-32;                         //change to upper case 
    }
    else
    {
        str[i] = str[i];
    }
    }

    cout <<endl;
    cout <<"New string :" << str <<endl;             //print string
    

    return 0;
}
