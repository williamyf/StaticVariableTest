#include "stdafx.h"
#include "MyClass1.h"
#include "../PubFun/Mgr.h"

MyClass1::MyClass1(const std::string &name):_name(name)
{
	Mgr::ins()->increase();
	std::cout <<"MyClass1("<< _name << "): constructing. Mgr::ins()->count()=" << Mgr::ins()->count() << std::endl;
}


MyClass1::~MyClass1()
{
}

//MyClass1 g_mycls1("g_mycls1");