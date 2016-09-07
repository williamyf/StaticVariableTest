// TestExe.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "../PubFun/mysingleton.h"
#include "../MidModule1/MyClass1.h"
#include "../MidModule2/MyClass2.h"

int main()
{
	std::cout << "enter main()." << std::endl << std::endl;
	MyClass1 mycls1("mycls1");
	MyClass2 mycls2("mycls2");
	std::cout <<"in main(): mysingleton::ins().count()="<< mysingleton::ins().count() << std::endl << std::endl;
	std::cout << "leave main()." << std::endl;
    return 0;
}

