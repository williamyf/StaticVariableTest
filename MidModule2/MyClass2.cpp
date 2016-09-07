#include "MyClass2.h"
#include "../PubFun/Mgr.h"


MyClass2::MyClass2(const std::string &name):_name(name)
{
	myMgr::ins()->increase();
	std::cout << "MyClass2(" << _name << "): constructing. myMgr::ins()->count()=" << myMgr::ins()->count() << std::endl;
}


MyClass2::~MyClass2()
{
	//std::cout << mysingleton::ins().count() << std::endl;
	//std::cout << _name << ": destroying..." << std::endl;
}

MyClass2 g_mycls2("g_mycls2");