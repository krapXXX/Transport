#include "Transport.h"
#include<iostream>
using namespace std;

Transport::Transport()
{
	surface = nullptr;
	year = 0;
}

Transport::Transport(const char* s, int y)
{
	surface = new char[strlen(s) + 1];
	strcpy_s(surface, strlen(s) + 1, s);
	year = y;
}

void Transport::Input(const char* s, int y)
{
	if (surface != nullptr)
	{
		delete[] surface;
	}
	surface = new char[strlen(s) + 1];
	strcpy_s(surface, strlen(s) + 1, s);
	year = y;
}

void Transport::Print()
{
	cout << "Surface: " << surface<<endl;
	cout << "Year: " << year<<endl;
}

Transport::~Transport()
{
	delete[]surface;
}
