// SwapSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int* ap, int* bp)
{
	int temp;
	temp = *ap;
	*ap = *bp;
	*bp = temp;
}

void swap_sort(int* a, int* b, int* c, bool order)
{
	if (order == true)
	{
		if (*a > *b)
			swap(a, b);

		if (*a > *c)
			swap(a, c);

		if (*b > *c)
			swap(b, c);

	}
	else
	{
		if (*a < *b)
			swap(a, b);

		if (*a < *c)
			swap(a, c);

		if (*b < *c)
			swap(b, c);

	}
}


int main()
{
	int a, b, c;
	bool ascending;
	int* ap = &a;
	int* bp = &b;
	int* cp = &c;

	while(true)
	{
		cout << endl << "Give a (0 to quit) :";
		cin >> a;

		if (a == 0)
			break;
		
		cout << endl << "Give b :";
		cin >> b;
		cout << endl << "Give c :";
		cin >> c;
		cout << endl << "Sort a/d (1/0) :";
		cin >> ascending;

		swap_sort(ap, bp, cp, ascending);

		cout << endl << "Result :" << (*ap) << ", " << (*bp) << ", " << (*cp) << endl;

	}

	cout << "Bye bye!";
}
