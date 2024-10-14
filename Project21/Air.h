
#pragma once
#include"Transport.h"
class Air :public Transport
{
	char* type;
public:
	Air();
	Air(const char* s, int y,const char* t);
	void Input(const char* s, int y, const char* t);
	void Print();
	~Air();
};
