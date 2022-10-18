// Write a program to accept a string and starting with first character replace every alternate character with the '*' character.

#include <iostream>
using namespace std;
int main()
{

    string str;

    cout << "Enter a string : ";
    getline(cin, str);                              //Accept and read the string

    for (int i = 0; i < str.length(); i = i + 2)    //traverse the string
    {
        str[i] = '*';                               //replace with *
    }

    cout <<endl;
    cout <<"New string :" << str <<endl;             //print string
    

    return 0;
}