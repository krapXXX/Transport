#include "Auto.h"
#include<iostream>
using namespace std;

Auto::Auto()
{
	firm = nullptr;
}

Auto::Auto(char* s, int y, char* t, char* f) :Land(s, y,t)
{

	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Auto::Input(char* s, int y, char* t, char* f)
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

void Auto::Print()
{
	Transport::Print();
	cout << "Type: " << firm << endl;
}

Auto::~Auto()
{
	delete[]firm;
}
