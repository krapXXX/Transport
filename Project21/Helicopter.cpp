#include "Helicopter.h"
#include<iostream>
using namespace std;

Helicopter::Helicopter()
{
	firm = nullptr;
}

Helicopter::Helicopter(const char* s, int y, const char* t, const char* f) :Air(s, y, t)
{

	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Helicopter::Input(const char* s, int y, const char* t, const char* f)
{
	if (firm != nullptr)
	{
		delete[] firm;
	}
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
	Air::Input(s, y, t);
}
void Helicopter::Print()
{
	Air::Print();
	cout << "Firm: " << firm << endl;
}

Helicopter::~Helicopter()
{
	delete[]firm;
}
