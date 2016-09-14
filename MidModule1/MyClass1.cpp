#include "stdafx.h"
#include "MyClass1.h"
#include <iostream>
#include "../PubFun/Mgr.h"
#include "../PubFun/Singleton.h"

MyClass1::MyClass1(const std::string &name):_name(name)
{
	//MyClassTest<ttt>::ins().do_nothing();

	//Mgr::get_mutable_instance().increase();
	Mgr2::ins()->increase();
	std::cout <<"MyClass1("<< _name << "): constructing. Mgr2::ins()->count()=" << Mgr2::ins()->count() << std::endl;

	//MgrAgent::get_mutable_instance().increase();
	//MgrAgent::instance().increase();
	//std::cout <<"MyClass1("<< _name << "): constructing. MgrAgent::get_mutable_instance().count()=" << MgrAgent::get_mutable_instance().count() << std::endl;
	//std::cout <<"MyClass1("<< _name << "): constructing. MgrAgent::instance().count()=" << MgrAgent::instance().count() << std::endl;
}


MyClass1::~MyClass1()
{
}

MyClass1 g_mycls1("g_mycls1");


#include "../PubFun/Singleton.h"
void set1(const int i)
{
	CSingleton *sig = CSingleton::GetInstance();
	sig->set(i);
}

int ret1()
{
	CSingleton *sig = CSingleton::GetInstance();
	return sig->get();
}

void gset1()
{
	g_int = 1;
}

int gget1()
{
	return g_int;
}
