// Write a program to accept a string and a position P. Print the character at position P in the string.
#include <iostream>
using namespace std;

int main()
{

    string str;
    int n;

    cout << "Enter a string :";               
    getline(cin, str);                              //read full string
    cout << "Enter position of character:" ;
    cin >> n;                                       //accept number at which position to find
    n--;
    str.at(n);                                      //use at to find character at given position

    cout << "Character at " << n << " Position is: " << str.at(n)<<endl;

    return 0;
}