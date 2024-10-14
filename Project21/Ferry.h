#pragma once
#include"Water.h"
class Ferry :public Water
{
	char* firm;
public:
	Ferry();
	Ferry(const char* s, int y, const  char* t, const char* f);
	void Input(const char* s, int y, const char* t, const char* f);
	void Print();
	~Ferry();
};
