// TestExe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "../PubFun/Mgr.h"
#include "../MidModule1/MyClass1.h"
#include "../MidModule2/MyClass2.h"
#include "../PubFun/Singleton.h"

int main()
{
	//Mgr mgr;
	std::cout << std::endl << "enter main()." << std::endl << std::endl;

	MyClass1 mycls1("mycls1");
	MyClass2 mycls2("mycls2");
	
	//std::cout << "in main(): MgrAgent::get_mutable_instance().count()=" << MgrAgent::get_mutable_instance().count() << std::endl << std::endl;
	//std::cout << "in main(): MgrAgent::instance().count()=" << MgrAgent::instance().count() << std::endl << std::endl;
	
	MyClassTest<ttt>::ins().do_nothing();

	//GetInstance  类静态变量默认是0
	//g_int 全局变量默认是100 
	//CSingleton::GetInstance()->set(100);
	//std::cout << CSingleton::GetInstance()->get() << std::endl;
	//std::cout << ret1() << std::endl;
	//std::cout << ret2() << std::endl;
	//set1(1);
	//std::cout << CSingleton::GetInstance()->get() << std::endl;
	//std::cout << ret1() << std::endl;
	//std::cout << ret2() << std::endl;
	//set2(2);
	//std::cout << CSingleton::GetInstance()->get() << std::endl;
	//std::cout << ret1() << std::endl;
	//std::cout << ret2() << std::endl;
	//
	//g_int = 1000;
	//std::cout << g_int << std::endl;
	//std::cout << gget1() << std::endl;
	//std::cout << gget2() << std::endl;
	//gset1();
	//std::cout << g_int << std::endl;
	//std::cout << gget1() << std::endl;
	//std::cout << gget2() << std::endl;
	//gset2();
	//std::cout << g_int << std::endl;
	//std::cout << gget1() << std::endl;
	//std::cout << gget2() << std::endl;






	std::cout << std::endl << "leave main()." << std::endl << std::endl;

    return 0;
}

// execute results:
// constructing Mgr...
// MyClass1(g_mycls1) : constructing.MgrAgent::get_mutable_instance().count() = 1
// constructing Mgr...
// MyClass2(g_mycls2) : constructing.MgrAgent::get_mutable_instance().count() = 1
// enter main().
// 
// constructing Mgr...
// MyClass1(mycls1) : constructing.MgrAgent::get_mutable_instance().count() = 1
// constructing Mgr...
// MyClass2(mycls2) : constructing.MgrAgent::get_mutable_instance().count() = 1
// constructing Mgr...
// in main() : MgrAgent::get_mutable_instance().count() = 0
// 
// leave main().
// destorying Mgr...
// destorying Mgr...
// destorying Mgr...

