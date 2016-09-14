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



Mgr2::Mgr2()
{
	std::cout << "constructing Mgr2..." << std::endl;
}

Mgr2::~Mgr2()
{
	std::cout << "destorying Mgr2..." << std::endl;
}


Mgr3::Mgr3()
{
	std::cout << "constructing Mgr3..." << std::endl;
}

Mgr3::~Mgr3()
{
	std::cout << "destorying Mgr3..." << std::endl;
}

mysingleton<Mgr3> g_myMgr3;