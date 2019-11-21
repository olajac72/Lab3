// CharacterReplacement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void replace_chars(char* strchar, char searchchar, char replacechar);

int main()
{
	char str[100];
	char search;
	char replace;

	cout << "Enter character string :";
	cin >> str;
	cout << "Enter search character :";
	cin >> search;
	cout << "Enter replace character :";
	cin >> replace;

	cout <<"Before :" << str << endl;
	replace_chars(str, search, replace);
	cout << "After :" << str << endl;
}

void replace_chars(char* strchar, char searchchar, char replacechar)
{
	int index;

	index = 0;

	while (*(strchar + index) != '\0')
	{
		if (*(strchar + index) == searchchar)
			(*(strchar + index)) = replacechar;

		index++;
	}
}