#include "pch.h"
#include <iostream>
#include"HASHTABLEcls.h"

using namespace std;

int main()
{
	HASHTABLEcls newTable;
	string ID;
	string name;
	cout << "Enter Your National ID Number:";
	cin >> ID;
	cout << "Enter Your Name:";
	cin >> name;
	newTable.addIDOpenLoop(ID, name);

	cout << "\nEnter Your National ID Number:";
	cin >> ID;
	cout << "Enter Your Name:";
	cin >> name;
	newTable.addIDOpenLoop(ID, name);

	cout << "\nEnter Your National ID Number:";
	cin >> ID;
	cout << "Enter Your Name:";
	cin >> name;
	newTable.addIDOpenLoop(ID, name);

	cout << "\nEnter National ID Number For search:";
	cin >> ID;
	newTable.searchIDOpenLoop(ID);

	cout << "\n\nEnter National ID Number For search:" ;
	cin >> ID;//>> name;
	newTable.searchIDOpenLoop(ID);

	cout << "\n\nEnter a National ID Number for delete:" ;
	cin >> ID;
	newTable.deleteIDOpenLoop(ID);

	cout << "\nEnter a National ID Number for delete:" ;
	cin >> ID;
	newTable.deleteIDOpenLoop(ID);

	cout << "\nEnter National ID Number For search:";
	cin >> ID;
	newTable.searchIDOpenLoop(ID);
	
}
