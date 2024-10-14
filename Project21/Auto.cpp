#include "Auto.h"
#include<iostream>
using namespace std;

Auto::Auto()
{
	firm = nullptr;
}

Auto::Auto(const char* s, int y, const char* t, const char* f) :Land(s, y,t)
{
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Auto::Input(const char* s, int y,const char* t,const char* f)
{
	if (firm != nullptr)
	{
		delete[] firm;
	}
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
	Land::Input(s, y,t);
}

void Auto::Print()
{
	Land::Print();
	cout << "Firm: " << firm << endl;
}

Auto::~Auto()
{
	delete[]firm;
}
