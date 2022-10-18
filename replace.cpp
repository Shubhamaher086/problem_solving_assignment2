// Write a program to accept a string, a position P and a character T. Replace the character at position P in the string with character T.
#include <iostream>
using namespace std;
int main()
{
    string str;                                 //declare string and position
    int p;

    cout << "Enter a string : " ;
    getline(cin, str);                          //accept and read the string
    cout << "Enter position of character : ";
    cin >> p;                                   //accept the position at which we have to replace chracter "T"
    --p;

    cout << "New string is : " << str.replace(p, 1, "T");  //use replace to replace character

    return 0;
}