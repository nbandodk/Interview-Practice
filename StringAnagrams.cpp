/*Program to determine whether two given strings are permutations of each other (anagrams).
	Method 1: Sort the two strings and compare ------- Complexity O(nlgn) [Depending on the sorting algo]
	Method 2: Use an additional data struct like an array to maintain a count of the ASCII characters*/

#include <iostream>
#define EXCHANGE(a, b) tmp = a; a = b; b = tmp;

using namespace std;

// partition method
int partition(string &s, int p, int r)
{
	int x = (int)s[r];
	int i = p - 1;
	int tmp;
	for (int j = p; j<r; j++)
	{
		if ((int)s[j] <= x)
		{
			i++;
			EXCHANGE(s[i], s[j]);
		}
	}
	EXCHANGE(s[i + 1], s[r]);
	return i + 1;
}

// quicksort method
int quicksort(string &s, int p, int r)
{
	if (p<r)
	{
		int q = partition(s, p, r);
		quicksort(s, p, q - 1);
		quicksort(s, q + 1, r);
	}
	return 0;
}

bool areAnagramsM1(string s1, string s2)
{
	if (s1.length() != s2.length())
		return false;
	quicksort(s1, 0, s1.length() - 1);
	quicksort(s2, 0, s2.length() - 1);

	if (s1.compare(s2) != 0)
		return false;
	else
		return true;
}

bool areAnagramsM2(string s1, string s2)
{
	if (s1.length() != s2.length())
		return false;
	int count_arr1[128] = { 0 }, count_arr2[128] = { 0 };
	for (int i = 0; i < s1.length(); i++)
	{
		count_arr1[(int)s1[i]] += 1;
		count_arr2[(int)s2[i]] += 1;
	}
	for (int i = 0; i < 128; i++)
	{
		if (count_arr1[i] != count_arr2[i])
			return false;
	}
	return true;
}

int main()
{
	string s1 = "geeksforgeeks";
	string s2 = "forgeskegeeks";

	if (areAnagramsM2(s1, s2) == true)
		cout << "The given strings are anagrams of each other\n";
	else
		cout<<"The given strings are not anagrams of each other\n";



	return 0;
}
