#include "Water.h"
#include<iostream>
using namespace std;

Water::Water()
{
	type = nullptr;
}

Water::Water(const char* s, int y, const char* t):Transport(s,y)
{

	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}

void Water::Input(const char* s, int y, const char* t)
{
	if (type != nullptr)
	{
		delete[] type;
	}
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
	Transport::Input(s,y);
}

void Water::Print()
{
	Transport::Print();
	cout << "Type: " << type << endl;
}

Water::~Water()
{
	delete[]type;
}
