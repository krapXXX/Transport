#pragma once
#include"Land.h"
class Drawn :public Land
{
	char* animal;
public:
	Drawn();
	Drawn(char* s, int y, char* t, char* a);
	void Input(char* s, int y, char* t, char* a);
	void Print();
	~Drawn();
};
