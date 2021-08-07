#include "pch.h"
#include "HASHTABLEcls.h"


HASHTABLEcls::HASHTABLEcls()
{
	//Maximum table size can be 108 = 9*9
	for (int a = 0; a < tableSize; a++)
	{
		table[a] = new Box;
		table[a]->ID = "empty";
		table[a]->name = "empty";
	}
}
int HASHTABLEcls::hashtableclsGen(string ID)
{
	int hashtablecls = 0;
	string element;
	int index = 0;

	while (ID.length() != 9)
	{
		cout << "Enter a Valid National ID Number:";
		cin >> ID;
	}

	for (int a = 0; a < ID.length(); a++)
	{
		element = ID[a];
		index = index + std::stoi(element);
	}

	return index;
}

void HASHTABLEcls::addIDOpenLoop(string ID, string name)
{
	int x = 1;
	int keyHASHTABLEcls = hashtableclsGen(ID);

	int index = keyHASHTABLEcls;
	while (table[index]->ID != "empty" && table[index]->ID != ID)
	{
		index = keyHASHTABLEcls + x * 1 % tableSize;
		x = x + 1;
	}

	//cout << index;
	if (table[index]->ID == "empty")
	{
		table[index]->ID = ID;
		table[index]->name = name;
	}
	size++;

}

void HASHTABLEcls::searchIDOpenLoop(string ID)
{
	int x = 1;
	int index = hashtableclsGen(ID);
	//cout << index;
	while (table[index]->ID != "empty")
	{
		if (index > 110)
		{
			cout << "No ID Found in the HashTable" << endl;
			return;
		}
		if (table[index]->ID == ID)
		{
			cout << "Name : " << table[index]->name;
			return;
		}
		index = index + 1 * x % tableSize;
		x = x + 1;
	}

}

void HASHTABLEcls::deleteIDOpenLoop(string ID)
{
	int x = 1;
	int index = hashtableclsGen(ID);
	//cout << index;
	while (table[index]->ID != "empty")
	{
		if (index > 110)
		{
			cout << "\nNo ID found in Hash Table" << endl;
			return;
		}
		if (table[index]->ID == ID)
		{
			table[index]->name = "empty";
			table[index]->ID = "empty";
			cout << "\nID was Deleted" << endl;
			return;
		}
		index = index + 1 * x % tableSize;
		x = x + 1;
	}
}


HASHTABLEcls::~HASHTABLEcls()
{
}
