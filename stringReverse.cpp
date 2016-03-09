/*
Code to reverse a string using char arrays and pointers
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";
    string rev_str;
    cout << "Original string: " << str << endl;
    for(int head=0, tail=str.length()-1; head<tail; head++, tail--)
    {
        char ch = str[head];
        str[head] = str[tail];
        str[tail] = ch;
    }
    cout << "Reversed string: " << str << endl;
    
    return 0;
}
