/*
Code to reverse a string using char arrays and pointers
*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//reverse string using array operations
void reverseStringArr(string &s)
{
    cout << "Reversing string using array operations" << endl;
    for(int head=0, tail=s.length()-1; head<tail; head++, tail--)
    {
        char ch = s[head];
        s[head] = s[tail];
        s[tail] = ch;
    }
}

//reverse string using pointers
void reverseStringPt(char *s)
{
    cout << "Reversing string using array operations" << endl;
    char *head = s;
    char *tail = s + strlen(s)-1;
    for(;head<tail; head++, tail--)
    {
        char ch = *head;
        *head = *tail;
        *tail = ch;
    }
}

//reverse string using built-in function
void reverseStringFunc(string &s)
{
    cout << "Reversing string using array operations" << endl;
    s = string(s.rbegin(), s.rend());
}

int main()
{
    string str = "Hello";
    cout << "Original string: " << str << endl;
    reverseStringArr(str);
    
    cout << "Reversed string: " << str << endl;
    
    cout << "\n";
    
    str = "Hello";
    cout << "Original string: " << str << endl;
    char *s = new char[str.length()+1];
    strcpy(s, str.c_str());
    reverseStringPt(s);
    
    cout << "Reversed string: " << s << endl;
    
    cout << "\n";
        
    str = "Hello";
    cout << "Original string: " << str << endl;
    reverseStringFunc(str);
    
    cout << "Reversed string: " << str << endl;
    
    delete [] s;
    return 0;
}
