// TestExe.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "../PubFun/mysingleton.h"
#include "../MidModule2/MyClass2.h"

int main()
{
	std::cout << "enter main()." << std::endl;
	MyClass2 mycls("mycls");
	std::cout << mysingleton::ins().count() << std::endl;
    return 0;
}

