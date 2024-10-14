#include "Drawn.h"
#include<iostream>
using namespace std;

Drawn::Drawn()
{
	animal = nullptr;
}

Drawn::Drawn(char* s, int y, char* t, char* a) :Land(s, y, t)
{

	animal = new char[strlen(a) + 1];
	strcpy_s(animal, strlen(a) + 1, a);
}

void Drawn::Input(char* s, int y, char* t, char* a)
{
	if (animal != nullptr)
	{
		delete[] animal;
	}
	animal = new char[strlen(a) + 1];
	strcpy_s(animal, strlen(a) + 1, a);
	/*if (surface != nullptr)
	{
		delete[] type;
	}
	year = y;
	surface = new char[strlen(s) + 1];
	strcpy_s(surface, strlen(s) + 1, s);*/
	Transport::Input(s, y);
}

void Drawn::Print()
{
	Transport::Print();
	cout << "Type: " << animal << endl;
}

Drawn::~Drawn()
{
	delete[]animal;
}
