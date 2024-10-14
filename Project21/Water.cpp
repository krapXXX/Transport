#include "Water.h"
#include<iostream>
using namespace std;

Water::Water()
{
	type = nullptr;
}

Water::Water(char* s, int y, char* t):Transport(s,y)
{

	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}

void Water::Input(char* s, int y, char* t)
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
	Transport::Input(s,y);
}

void Water::Print()
{
    Transport::Print();
	cout << "Type: " << type<<endl;
}

Water::~Water()
{
	delete[]type;
}
