#pragma once
#include "dllexport.h"
#include <iostream>

extern int PUBFUN_EXPORT g_int;
class PUBFUN_EXPORT CSingleton
{
private:
	CSingleton(const int i);   //构造函数是私有的   
	static CSingleton *m_pInstance;
	int m_i;
public:
	static CSingleton* GetInstance()
	{
		if (m_pInstance == 0)  //判断是否第一次调用  
			m_pInstance = new CSingleton(0);
		return m_pInstance;
	}
	void set(const int i);
	int get();
};


template<class T>
class MyClassTest
{
public:
	
	PUBFUNEXPORT static T& ins();
private:
	PUBFUNEXPORT MyClassTest() {
		std::cout << "Constructing MyClassTest..." << std::endl;
	};
	PUBFUNEXPORT ~MyClassTest() {
		std::cout << "Destorying MyClassTest..." << std::endl;
	};
	PUBFUNEXPORT static T & instance;
};

template<class T>
T& MyClassTest<T>::ins()
{
	static T _ins;
	return _ins;
}

class PUBFUN_EXPORT ttt
{
public:

	void do_nothing();
private:
	friend class MyClassTest<ttt>;
	int _count;
	ttt();
	~ttt();
};

template<class T>
PUBFUNEXPORT T & MyClassTest< T >::instance = MyClassTest< T >::ins();
//
//MyClassTest::MyClassTest()
//{
//	std::cout << "Constructing MyClassTest..." << std::endl;
//}
//
//MyClassTest::~MyClassTest()
//{
//	std::cout << "Destorying MyClassTest..." << std::endl;
//}
//

//MyClassTest MyClassTest::_ins;


//static MyClassTest g_ttt;
