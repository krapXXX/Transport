#pragma once
#include"Water.h"
class Boat :public Water
{
	char* firm;
public:
	Boat();
	Boat(const char* s, int y, const  char* t, const char* f);
	void Input(const char* s, int y, const char* t, const char* f);
	void Print();
	~Boat();
};
