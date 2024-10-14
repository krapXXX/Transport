#pragma once
#include"Transport.h"
class Land :public Transport
{
	char* type;
public:
	Land();
	Land(const char* s, int y, const char* t);
	void Input(const char* s, int y,const char* t);
	void Print();
	~Land();
};
