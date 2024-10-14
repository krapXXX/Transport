#pragma once
#include"Land.h"
class Auto :public Land
{
	char* firm;
public:
	Auto();
	Auto(const char* s, int y, const char* t, const char* f);
	void Input(const char* s, int y, const char* t, const char* f);
	void Print();
	~Auto();
};
