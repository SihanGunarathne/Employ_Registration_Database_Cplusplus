#pragma once
#include<iostream>
#include<string>

using namespace std;

class HASHTABLEcls
{
private:
	static const int tableSize = 108;
	int size = tableSize;
	struct Box
	{
		string name = "empty";
		string ID = "empty";
	};
	Box* table[tableSize];
public:
	HASHTABLEcls();
	int hashtableclsGen(string ID);
	void addIDOpenLoop(string ID, string name);
	void searchIDOpenLoop(string ID);
	void deleteIDOpenLoop(string ID);
	~HASHTABLEcls();
};

