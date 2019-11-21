// VectorDatabase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void dbclear(vector<string>* db);
void dbinsert(vector<string>* db);
void dbsearch(vector<string>* db);
void dbdelete(vector<string>* db);
void dbprint(vector<string>* db);
void dbsave(vector<string>* db);
void dbload(vector<string>* db);

int main()
{
	vector<string> db;
	vector<string>* dbp;
	int choice;
	string name;

	dbp = &db;

	while (true)
	{
		cout << "MENU" << endl;
		cout << "1: Initialize database" << endl;
		cout << "2: Insert" << endl;
		cout << "3: Search" << endl;
		cout << "4: Delete" << endl;
		cout << "5: Print" << endl;
		cout << "6: Save database" << endl;
		cout << "7: Load database" << endl;
		cout << "8: Quit" << endl;
		cout << "Make your choice :";
		cin >> choice;

		if (choice == 8)
			break;

	

		switch (choice)
		{
		case 1:
			dbclear(dbp);
			break;
		case 2:
			dbinsert(dbp);
			break;
		case 3:
			dbsearch(dbp);
			break;
		case 4:
			dbdelete(dbp);
			break;
		case 5:
			dbprint(dbp);
			break;
		case 6:
			dbsave(dbp);
			break;
		case 7:
			dbload(dbp);
			break;
		default:
			break;
		}
		
	}
}


void dbsave(vector<string>* db)
{
	ofstream dbfile;
	
	dbfile.open("Database.txt",ios::out);
	if (dbfile.is_open())
	{
		for (string s : *db)
		{
			dbfile << s << endl;
		}
		dbfile.close();
	}
}

void dbload(vector<string>* db)
{
	string line;

	dbclear(db);

	ifstream dbfile;

	dbfile.open("Database.txt", ios::in);

	if (dbfile.is_open())
	{
		dbfile >> line;
		while (!dbfile.eof())
		{
			db->push_back(line);
			dbfile >> line;
		}
	}
	
}

void dbclear(vector<string>* db)
{
	db->clear();
}

void dbinsert(vector<string>* db)
{
	string name;
	while (true)
	{
		cout << "Insert name:";
		cin >> name;
		if (name == "Q" || name == "q")
			break;
		db->push_back(name);
	}
}

void dbsearch(vector<string>* db)
{
	string name;

	cout << "Search for :";
	cin >> name;

	for (unsigned int i = 0; i < db->size(); i++)
	{
		//if ((*db)[i].find(name) != string::npos)
		if(db->operator[](i).find(name) != string::npos)
		{
			//cout << (*db)[i] << endl;
			cout << db->operator[](i) << endl;
		}
	}
}

void dbdelete(vector<string>* db)
{
	string name;

	cout << "Delete name:";
	cin >> name;

	for (auto n = db->begin(); n != db->end();)
	{
		if (name == *n)
		{
			n = db->erase(n);
		}
		else
		{
			++n;
		}
	}
}

void dbprint(vector<string>* db)
{
	for (string s : *db)
	{
		cout << s << endl;
	}
}