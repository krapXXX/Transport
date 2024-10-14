#include "Ferry.h"
#include<iostream>
using namespace std;

Ferry::Ferry()
{
	firm = nullptr;
}

Ferry::Ferry(const char* s, int y, const char* t, const char* f) :Water(s, y, t)
{

	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Ferry::Input(const char* s, int y, const char* t, const char* f)
{
	if (firm != nullptr)
	{
		delete[] firm;
	}
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
	Water::Input(s, y, t);
}

void Ferry::Print()
{
	Water::Print();
	cout << "Firm: " << firm << endl;
}

Ferry::~Ferry()
{
	delete[]firm;
}
