#pragma once
class Transport
{
protected:
		char* surface;
		int year;
public:
	Transport();
	Transport(const char* s, int y);
	void Input(const char* s, int y);
	void Print();
	~Transport();
};
