#pragma once
#include"Air.h"
class Airship :public Air
{
	char* firm;
public:
	Airship();
	Airship(char* s, int y, char* t, char* f);
	void Input(char* s, int y, char* t, char* f);
	void Print();
	~Airship();
};

