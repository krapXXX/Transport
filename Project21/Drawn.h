#pragma once
#include"Land.h"
class Drawn :public Land
{
	char* animal;
public:
	Drawn();
	Drawn(const char* s, int y, const char* t, const char* a);
	void Input(const  char* s, int y, const char* t, const char* a);
	void Print();
	~Drawn();
};
