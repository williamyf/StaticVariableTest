#pragma once
#include "dllexport.h"
#include <string>

class MIDMODULE2_EXPORT MyClass2
{
public:
	MyClass2(const std::string &name);
	~MyClass2();

private:
	std::string _name;
};

