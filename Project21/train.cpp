#include "Train.h"
#include<iostream>
using namespace std;

Train::Train()
{
	firm = nullptr;
}

Train::Train(const char* s, int y, const char* t, const char* f) :Land(s, y, t)
{
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
}

void Train::Input(const char* s, int y, const char* t, const char* f)
{
	if (firm != nullptr)
	{
		delete[] firm;
	}
	firm = new char[strlen(f) + 1];
	strcpy_s(firm, strlen(f) + 1, f);
	Land::Input(s, y,t);
}

void Train::Print()
{
	Land::Print();
	cout << "Firm: " << firm << endl;
}

Train::~Train()
{
	delete[]firm;
}
