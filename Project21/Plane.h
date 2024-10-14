#pragma once
#include"Air.h"
class Plane :public Air
{
	char* firm;
public:
	Plane();
	Plane(char* s, int y, char* t, char* f);
	void Input(char* s, int y, char* t, char* f);
	void Print();
	~Plane();
};
