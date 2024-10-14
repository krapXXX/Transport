#include "Ferry.h"
#include<iostream>
using namespace std;

Ferry::Ferry()
{
	firm = nullptr;
}

Ferry::Ferry(char* s, int y, char* t, char* f) :Water(s, y, t)
{

	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Ferry::Input(char* s, int y, char* t, char* f)
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

void Ferry::Print()
{
	Transport::Print();
	cout << "Type: " << firm << endl;
}

Ferry::~Ferry()
{
	delete[]firm;
}
