#include "Cstring.h"

Cstring::Cstring()
{
	str = nullptr;
	len = 0;
}

Cstring::Cstring(const char* str)
{
	len = strlen(str);
	this->str = new char[len + 1];

	for (int i = 0; i < len; i++)
		this->str[i] = str[i];

	this->str[len] = '\0';
}

Cstring::~Cstring()
{
	delete[]this->str;
}

void Cstring::Print()
{
	std::cout << str;
}