// TestExe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "../PubFun/Mgr.h"
#include "../MidModule1/MyClass1.h"
#include "../MidModule2/MyClass2.h"

int main()
{
	//Mgr mgr;
	std::cout << "enter main()." << std::endl << std::endl;
	MyClass1 mycls1("mycls1");
	MyClass2 mycls2("mycls2");
	std::cout <<"in main(): Mgr::ins()->count()="<< Mgr::ins()->count() << std::endl << std::endl;
	std::cout << "leave main()." << std::endl;

    return 0;
}

// execute results:
// constructing Mgr...
// MyClass1(g_mycls1) : constructing.Mgr::ins()->count() = 1
// constructing Mgr...
// MyClass2(g_mycls2) : constructing.Mgr::ins()->count() = 1
// enter main().
// 
// constructing Mgr...
// MyClass1(mycls1) : constructing.Mgr::ins()->count() = 1
// constructing Mgr...
// MyClass2(mycls2) : constructing.Mgr::ins()->count() = 1
// constructing Mgr...
// in main() : Mgr::ins()->count() = 0
// 
// leave main().
// destorying Mgr...
// destorying Mgr...
// destorying Mgr...

