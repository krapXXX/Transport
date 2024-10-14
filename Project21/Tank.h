#pragma once
#include"Water.h"
class Tank :public Water
{
	char* firm;
public:
	Tank();
	Tank(const char* s, int y, const char* t, const char* f);
	void Input(const char* s, int y, const char* t, const char* f);
	void Print();
	~Tank();
};
