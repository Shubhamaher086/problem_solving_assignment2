// Write a program to accept a string and reverse it.

#include <iostream>
using namespace std;

void reverse(string str)                            //define reverse function
{
    cout << "reverse the string : ";
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
}

int main()
{
    string str;
    cout << "Enter the string : ";
    cin >> str;                                         //Accept the string

    cout << "read the string : ";                       
    for (int i = 0; i < str.length(); i++)              //Read the string
    {
        cout << str[i];
    }
    cout << endl;
    reverse(str);                                       //calling reverse function

    return 0;
}