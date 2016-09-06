// MidModule1.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "../PubFun/mysingleton.h"

class MyClass
{
public:
	MyClass();
	~MyClass();

private:

};

MyClass::MyClass()
{
	mysingleton::ins().increase();
}

MyClass::~MyClass()
{
}

MyClass mycls;