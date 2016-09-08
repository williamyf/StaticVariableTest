#include "Singleton.h"

int g_int = 100;
//static MyClassTest g_ttt;
CSingleton* CSingleton::m_pInstance = 0;

// template<class T>
// T MyClassTest<T>::_ins;




CSingleton::CSingleton(const int i)
{
	m_i = i;
}

void CSingleton::set(const int i)
{
	m_i = i;
}

int CSingleton::get()
{
	return m_i;
}

CSingleton*  Create()
{
	return CSingleton::GetInstance();
}

void ttt::do_nothing()
{
	//std::cout << "fuck!" << std::endl;
	std::cout << (++_count) << std::endl;
}

ttt::ttt():_count(0)
{
	std::cout << "Constructing ttt..." << std::endl;
}

ttt::~ttt()
{
	std::cout << "Destorying ttt..." << std::endl;
}
