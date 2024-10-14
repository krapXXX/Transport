#pragma once
#include"Air.h"
class Plane :public Air
{
	char* firm;
public:
	Plane();
	Plane(const char* s, int y, const char* t, const char* f);
	void Input(const char* s, int y, const char* t, const char* f);
	void Print();
	~Plane();
};
