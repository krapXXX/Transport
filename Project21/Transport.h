#pragma once
class Transport
{
protected:
		char* surface;
		int year;
public:
	Transport();
	Transport(char* s, int y);
	void Input(char* s, int y);
	void Print();
	~Transport();
};
