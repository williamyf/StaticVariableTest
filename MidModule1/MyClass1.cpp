#include "stdafx.h"
#include "MyClass1.h"
#include "../PubFun/mysingleton.h"

MyClass1::MyClass1(const std::string &name):_name(name)
{
	mysingleton::ins().increase();
	std::cout <<"MyClass1("<< _name << "): constructing. mysingleton.ins().count()=" << mysingleton::ins().count() << std::endl;
}


MyClass1::~MyClass1()
{
}

MyClass1 g_mycls1("g_mycls1");