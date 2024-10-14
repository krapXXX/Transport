#include "Airship.h"
#include<iostream>
using namespace std;

Airship::Airship()
{
	firm = nullptr;
}

Airship::Airship(char* s, int y, char* t, char* f) :Air(s, y, t)
{

	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Airship::Input(char* s, int y, char* t, char* f)
{
	if (firm != nullptr)
	{
		delete[] firm;
	}
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
	/*if (surface != nullptr)
	{
		delete[] type;
	}
	year = y;
	surface = new char[strlen(s) + 1];
	strcpy_s(surface, strlen(s) + 1, s);*/
	Transport::Input(s, y);
}

void Airship::Print()
{
	Transport::Print();
	cout << "Type: " << firm << endl;
}

Airship::~Airship()
{
	delete[]firm;
}
