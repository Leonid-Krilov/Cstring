#pragma once
#include <iostream>

class Cstring
{
public:
	Cstring();
	Cstring(const char* str);

	~Cstring();

	void Print();

private:
	char* str;
	int len;
};