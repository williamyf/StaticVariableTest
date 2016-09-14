#include "MyClass2.h"
#include <iostream>
#include "../PubFun/Mgr.h"
#include "../PubFun/Singleton.h"

MyClass2::MyClass2(const std::string &name):_name(name)
{
	//MyClassTest<ttt>::ins().do_nothing();
	//MyClassTest<ttt>::ins().do_nothing();
	//Mgr::get_mutable_instance().increase();
	Mgr2::ins()->increase();	
	std::cout << "MyClass2(" << _name << "): constructing. Mgr2::ins()->count()=" << Mgr2::ins()->count() << std::endl;
	//MgrAgent::get_mutable_instance().increase();
	//MgrAgent::instance().increase();
	//std::cout << "MyClass2(" << _name << "): constructing. MgrAgent::get_mutable_instance().count()=" << MgrAgent::get_mutable_instance().count() << std::endl;
	//std::cout << "MyClass2(" << _name << "): constructing. MgrAgent::instance().count()=" << MgrAgent::instance().count() << std::endl;
}


MyClass2::~MyClass2()
{
	//std::cout << mysingleton::ins().count() << std::endl;
	//std::cout << _name << ": destroying..." << std::endl;
}

MyClass2 g_mycls2("g_mycls2");

#include "../PubFun/Singleton.h"

void set2(const int i)
{
	CSingleton *sig = CSingleton::GetInstance();
	sig->set(i);
}


int ret2()
{
	CSingleton *sig = CSingleton::GetInstance();
	return sig->get();
}


void gset2()
{
	g_int = 2;
}


int gget2()
{
	return g_int;
}