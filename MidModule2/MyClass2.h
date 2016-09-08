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

void MIDMODULE2_EXPORT set2(const int i);
int MIDMODULE2_EXPORT ret2();
void MIDMODULE2_EXPORT gset2();
int MIDMODULE2_EXPORT gget2();
