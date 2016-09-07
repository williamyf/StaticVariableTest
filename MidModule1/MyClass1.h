#pragma once
#include "dllexport.h"
#include <string>

class MIDMODULE1_EXPORT MyClass1
{
public:
	MyClass1(const std::string &name);
	~MyClass1();
private:
	std::string _name;
};

