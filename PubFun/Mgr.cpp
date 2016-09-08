#include "Mgr.h"
#include <iostream>
#include "Singleton.h"

Mgr::Mgr() :_count(0)
{
	//MyClassTest<ttt>::ins().do_nothing();

	std::cout << "constructing Mgr..." << std::endl;
}


Mgr::~Mgr()
{
	std::cout << "destorying Mgr..." << std::endl;
}
