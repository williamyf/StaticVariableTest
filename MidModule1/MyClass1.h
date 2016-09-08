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

void MIDMODULE1_EXPORT set1(const int i);
int MIDMODULE1_EXPORT ret1();
void MIDMODULE1_EXPORT gset1();
int MIDMODULE1_EXPORT gget1();

