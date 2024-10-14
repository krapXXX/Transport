#pragma once
#include"Air.h"
class Airship :public Air
{
	char* firm;
public:
	Airship();
	Airship(const char* s, int y,const  char* t,const char* f);
	void Input(const char* s, int y,const  char* t,const char* f);
	void Print();
	~Airship();
};

