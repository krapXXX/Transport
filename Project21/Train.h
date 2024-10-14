#pragma once
#include"Land.h"
class Train :public Land
{
	char* firm;
public:
	Train();
	Train(const char* s, int y, const char* t, const char* f);
	void Input(const char* s, int y, const  char* t, const char* f);
	void Print();
	~Train();
};