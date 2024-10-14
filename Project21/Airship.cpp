#include "Airship.h"
#include<iostream>
using namespace std;

Airship::Airship()
{
	firm = nullptr;
}

Airship::Airship(const char* s, int y, const char* t, const char* f) :Air(s, y, t)
{

	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Airship::Input(const char* s, int y, const char* t, const char* f)
{
	if (firm != nullptr)
	{
		delete[] firm;
	}
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
	Air::Input(s, y, t);
}

void Airship::Print()
{
	Air::Print();
	cout << "Firm: " << firm << endl;
}

Airship::~Airship()
{
	delete[]firm;
}
