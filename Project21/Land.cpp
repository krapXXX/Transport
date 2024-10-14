#include "Land.h"
#include<iostream>
using namespace std;

Land::Land()
{
	type = nullptr;
}

Land::Land(const char* s, int y,const char* t) :Transport(s, y)
{

	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}

void Land::Input(const char* s, int y,const char* t)
{
	if (type != nullptr)
	{
		delete[] type;
	}
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
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
