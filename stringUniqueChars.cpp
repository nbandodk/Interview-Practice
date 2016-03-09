#include <iostream>
#include <string>
using namespace std;

bool isUnique(string s)
{
    int check[128] = {0};
    for(int i=0;i<s.length();i++)
    {
        if(check[(int)s[i]] == 1)
        {
            return false;
        }
        check[(int)s[i]] = 1;
    }
    
    return true;
}

int main()
{
    string str = "helo";
    bool a;
    a = isUnique(str);
    if(a == true)
        cout << "All unique chars" << endl;
    else
        cout << "Not all unique chars" << endl;
    return 0;
}
