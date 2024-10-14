#include "Land.h"
#include<iostream>
using namespace std;

Land::Land()
{
	type = nullptr;
}

Land::Land(char* s, int y, char* t) :Transport(s, y)
{

	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}

void Land::Input(char* s, int y, char* t)
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

void Land::Print()
{
	Transport::Print();
	cout << "Type: " << type << endl;
}

Land::~Land()
{
	delete[]type;
}
