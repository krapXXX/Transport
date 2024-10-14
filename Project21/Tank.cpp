#include "Tank.h"
#include<iostream>
using namespace std;

Tank::Tank()
{
	firm = nullptr;
}

Tank::Tank(const char* s, int y,const char* t,const char* f) :Water(s, y, t)
{

	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Tank::Input(const char* s, int y, const char* t, const char* f)
{
	if (firm != nullptr)
	{
		delete[] firm;
	}
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
	Water::Input(s, y,t);
}

void Tank::Print()
{
	Water::Print();
	cout << "Firm: " << firm << endl;
}

Tank::~Tank()
{
	delete[]firm;
}
