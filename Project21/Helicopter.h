#pragma once
#include"Air.h"
class Helicopter :public Air
{
	char* firm;
public:
	Helicopter();
	Helicopter(const char* s, int y, const char* t, const char* f);
	void Input(const char* s, int y, const char* t, const char* f);
	void Print();
	~Helicopter();
};

