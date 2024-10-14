#include "Drawn.h"
#include<iostream>
using namespace std;

Drawn::Drawn()
{
	animal = nullptr;
}

Drawn::Drawn(const char* s, int y, const char* t, const char* a) :Land(s, y, t)
{

	animal = new char[strlen(a) + 1];
	strcpy_s(animal, strlen(a) + 1, a);
}

void Drawn::Input(const char* s, int y, const char* t, const char* a)
{
	if (animal != nullptr)
	{
		delete[] animal;
	}
	animal = new char[strlen(a) + 1];
	strcpy_s(animal, strlen(a) + 1, a);
	Land::Input(s, y,t);
}

void Drawn::Print()
{
	Land::Print();
	cout << "Animal: " << animal << endl;
}

Drawn::~Drawn()
{
	delete[]animal;
}
