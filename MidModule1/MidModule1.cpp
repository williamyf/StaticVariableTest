// MidModule1.cpp : ���� DLL Ӧ�ó���ĵ���������
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