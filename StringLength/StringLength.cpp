// StringLength.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int countchar()
{
	char arr[] = "test";
	char* ptr = arr;
	int numchr = 0;

	for (int i = 0;; i++)
	{
		if (*(ptr + i) != '\0')
			numchr++;
		else
			break;
	}

	return numchr;
}

int main()
{
	cout << "Number of characters :" << countchar() << endl;
}
