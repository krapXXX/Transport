#include "Air.h"
#include<iostream>
using namespace std;

Air::Air()
{
	type = nullptr;
}

Air::Air(char* s, int y, char* t) :Transport(s, y)
{

	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}

void Air::Input(char* s, int y, char* t)
{
	if (type != nullptr)
	{
		delete[] type;
	}
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
	/*if (surface != nullptr)
	{
		delete[] type;
	}
	year = y;
	surface = new char[strlen(s) + 1];
	strcpy_s(surface, strlen(s) + 1, s);*/
	Transport::Input(s, y);
}

void Air::Print()
{
	Transport::Print();
	cout << "Type: " << type << endl;
}

Air::~Air()
{
	delete[]type;
}
