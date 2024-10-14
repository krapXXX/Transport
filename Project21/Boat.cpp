#include "Boat.h"
#include<iostream>
using namespace std;

Boat::Boat()
{
	firm = nullptr;
}

Boat::Boat(const char* s, int y, const char* t, const char* f) :Water(s, y, t)
{

	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Boat::Input(const char* s, int y, const char* t, const char* f)
{
	if (firm != nullptr)
	{
		delete[] firm;
	}
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
	Water::Input(s, y, t);
}


void Boat::Print()
{
	Water::Print();
	cout << "Firm: " << firm << endl;
}

Boat::~Boat()
{
	delete[]firm;
}
