// Extract from the given string STR, starting from position P, L characters into another string STR2.
// e.g. STR1="BATATA", P=2, L=4. Then STR2="ATAT

#include <iostream>
using namespace std;
int main()
{

    string str1,str2;                           //declaring two string
    int l, p;
    cout << "Enter a string : ";
    getline(cin, str1);                         //accept and read string

    cout << "Enter starting position of Character : ";
    cin >> p;                                   
    p--;

    cout << "Enter Length of new string : ";    //take input length of new string
    cin >> l;

    for (int i = p; i < (p + l); i++) 
    {
         str2 = str2 + str1[i];
    }
    cout <<"New extracted string str2 : "<< str2<<endl;
}