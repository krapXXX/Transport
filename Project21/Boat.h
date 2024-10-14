#pragma once
#include"Water.h"
class Boat :public Water
{
	char* firm;
public:
	Boat();
	Boat(char* s, int y, char* t, char* f);
	void Input(char* s, int y, char* t, char* f);
	void Print();
	~Boat();
};
