#include "Plane.h"
#include<iostream>
using namespace std;

Plane::Plane()
{
	firm = nullptr;
}

Plane::Plane(const char* s, int y, const char* t, const char* f) :Air(s, y, t)
{

	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Plane::Input(const char* s, int y, const char* t, const char* f)
{
	if (firm != nullptr)
	{
		delete[] firm;
	}
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
	Air::Input(s, y,t);
}

void Plane::Print()
{
	Air::Print();
	cout << "Firm: " << firm << endl;
}

Plane::~Plane()
{
	delete[]firm;
}
