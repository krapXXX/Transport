#include "Air.h"
#include<iostream>
using namespace std;

Air::Air()
{
	type = nullptr;
}

Air::Air(const char* s, int y,const char* t) :Transport(s, y)
{

	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
}

void Air::Input(const char* s, int y, const char* t)
{
	if (type != nullptr)
	{
		delete[] type;
	}
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
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
