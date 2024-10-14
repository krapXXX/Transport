#pragma once
#include"Transport.h"
class Land :public Transport
{
	char* type;
public:
	Land();
	Land(char* s, int y, char* t);
	void Input(char* s, int y, char* t);
	void Print();
	~Land();
};
