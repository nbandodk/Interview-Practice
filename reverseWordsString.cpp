?*
Program to reverse the words in a string
Example: Given string: Hi how are you?
        Output: you? are how Hi
*/

#include<iostream>
#include<string>

using namespace std;

void reverseWords(string &s)
{
	string word;
	string res;
	for (int i = 0; i < s.length(); i++)
	{
		if (char(s[i]) != ' ')
		{
			word = word + char(s[i]);
			continue;
		}
		if (char(s[i]) == ' ' && !word.empty())
		{
			res = word + " " + res;
			word = "";
			continue;
		}
		if (char(s[i]) == ' ' && word.empty())
		{
			continue;
		}
	}

	if (!word.empty())
	{
		s = word + " " + res;
	}
	else
	{
		s = res;
	}
	s = s.substr(0, s.length() - 1);
}

int main()
{
	string s = "Hey man you are   noob";
	cout << "Original String:\n" << s << endl;
	cout << endl;
	reverseWords(s);
	cout << "String with the words reversed:\n"<< s << endl;
	
	return 0;
}
