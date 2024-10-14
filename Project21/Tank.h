#pragma once
#include"Water.h"
class Tank :public Water
{
	char* firm;
public:
	Tank();
	Tank(char* s, int y, char* t, char* f);
	void Input(char* s, int y, char* t, char* f);
	void Print();
	~Tank();
};
