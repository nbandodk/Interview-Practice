#include<iostream>

using namespace std;

int main()
{
	string str = "booooobo";
	int flag = 0;
	for (int i = 0, j = str.length() - 1; i < j; i++, j--)
	{
		if (str[i] != str[j])
		{
			cout << "not a palindrome\n";
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		cout << "is palindrome\n";
	return 0;
}
