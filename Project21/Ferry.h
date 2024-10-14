#pragma once
#include"Water.h"
class Ferry :public Water
{
	char* firm;
public:
	Ferry();
	Ferry(char* s, int y, char* t, char* f);
	void Input(char* s, int y, char* t, char* f);
	void Print();
	~Ferry();
};
