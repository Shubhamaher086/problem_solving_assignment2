// Write a program to accept a string and replace every vowel in the string with the '*' character.

#include <iostream>
using namespace std;
int main()
{

    string str;

    cout << "Enter a string : ";
    getline(cin, str);                              //Accept and read the string

    for (int i = 0; i < str.length(); i++)          //traverse the string and checking the string with vowel
    {
            if (str[i] == 'A' || str[i] == 'a' || 
                str[i] == 'E' || str[i] == 'e' || 
                str[i] == 'I' || str[i] == 'i' || 
                str[i] == 'O' || str[i] == 'o' || 
                str[i] == 'U' || str[i] == 'u')             
            {
               str[i] = '*';                               //replace with *
            }
    }
    cout <<endl;
    cout <<"New string :" << str <<endl;                    //print string
    

    return 0;
}