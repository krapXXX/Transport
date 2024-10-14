#pragma once
#include"Transport.h"
class Water :public Transport
{
	char* type;
public:
	Water();
	Water(char* s, int y, char* t);
	void Input(char* s, int y, char* t);
	void Print();
	~Water();
};
