#include "stdafx.h"
#include "MyClass1.h"
#include "../PubFun/Mgr.h"

MyClass1::MyClass1(const std::string &name):_name(name)
{
	myMgr::ins()->increase();
	std::cout <<"MyClass1("<< _name << "): constructing. myMgr::ins()->count()=" << myMgr::ins()->count() << std::endl;
}


MyClass1::~MyClass1()
{
}

MyClass1 g_mycls1("g_mycls1");