#pragma once
#include"Land.h"
class Train :public Land
{
	char* firm;
public:
	Train();
	Train(char* s, int y, char* t, char* f);
	void Input(char* s, int y, char* t, char* f);
	void Print();
	~Train();
};