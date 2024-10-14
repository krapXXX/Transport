#pragma once
#include"Air.h"
class Helicopter :public Air
{
	char* firm;
public:
	Helicopter();
	Helicopter(char* s, int y, char* t, char* f);
	void Input(char* s, int y, char* t, char* f);
	void Print();
	~Helicopter();
};

