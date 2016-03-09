/*
Program to check if string has all unique chars.
Method 1: use additional data structs. Time complexity: O(n) Space: O(n)
Method 2: without using additional data structs. Sort the string in nlogn time and then compare without using any additional data structs.
*/
#include <iostream>
#include <string>
#define EXCHANGE(a, b) tmp = a; a = b; b = tmp;

using namespace std;

// partition method
int partition(string s, int p, int r)
{
	int x = (int)s[r];
	int i = p-1;
	int tmp;
	for(int j=p;j<r;j++)
	{
		if((int)s[j] <= x)
		{
			i++;
			EXCHANGE(s[i], s[j]);
		}
	}
	EXCHANGE(s[i+1], s[r]);
	return i+1;
}

// quicksort method
int quicksort(string s, int p, int r)
{
	if(p<r)
	{
		int q = partition(s, p, r);
		quicksort(s, p, q-1);
		quicksort(s, q+1, r);
	}
	return 0;
}


//using additional data structs
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

//without using additional data structs
bool isUnique_x(string s)
{
    quicksort(s, 0, s.length()-1);
    for(int i=0;i<s.length()-1;i++)
    {
        if(s[i] == s[i+1])
            return false;
    }
    
    return true;
}



int main()
{
    string str = "bar";
    bool a;
    a = isUnique_x(str);
    if(a == true)
        cout << "All unique chars" << endl;
    else
        cout << "Not all unique chars" << endl;
    return 0;
}
