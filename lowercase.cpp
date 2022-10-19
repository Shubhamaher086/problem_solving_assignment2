// Write a program to accept a string and convert all its characters to lower case.

#include <iostream>
using namespace std;
int main()
{

    string str;
    int i;
    cout << "Enter a string : ";
    getline(cin, str);                              // Accept and read the string

    for (i = 0; i < str.length(); i++)              // traverse the string
    {
        if (!(str[i] >= 'a' || str[i] >= 'z'))      // check if characters of string already in lowercase
        {
            str[i] = str[i] + 32;                   // change to upper case by adding 32
        }
        else
        {
            str[i] = str[i];
        }
    }

    cout << endl;
    cout << "New string : " << str << endl;         // print string

    return 0;
}
