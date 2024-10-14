#pragma once
#include"Transport.h"
class Air :public Transport
{
	char* type;
public:
	Air();
	Air(char* s, int y, char* t);
	void Input(char* s, int y, char* t);
	void Print();
	~Air();
};
