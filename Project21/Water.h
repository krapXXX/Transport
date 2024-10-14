#pragma once
#include"Transport.h"
class Water :public Transport
{
	char* type;
public:
	Water();
	Water(const char* s, const int y,const char* t);
	void Input(const char* s, int y, const char* t);
	void Print();
	~Water();
};
