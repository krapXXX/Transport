#pragma once
#include"Land.h"
class Auto :public Land
{
	char* firm;
public:
	Auto();
	Auto(char* s, int y, char* t, char* f);
	void Input(char* s, int y, char* t, char* f);
	void Print();
	~Auto();
};
