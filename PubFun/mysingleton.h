#pragma once
#include "dllexport.h"
#include <iostream>
#include <thread>
#include <mutex>
#include <map>
#include <string>

class PUBFUN_EXPORT singletons_t
{
public:
	singletons_t();
	~singletons_t();
	void* getSingleton(const std::string &name) const
	{
		auto iter = _singtons.find(name);
		if (iter != _singtons.end())
			return iter->second;
		return 0;
	}
	void addSingleton(const std::string &name, void* p)
	{
		if (!getSingleton(name))
		{
			_singtons[name] = p;
		}
	}
private:
	std::map<std::string, void*> _singtons;
};


//extern /*PUBFUN_EXPORT*/ std::mutex g_mut;
static std::mutex g_mut;

class singletons_t;
//extern singletons_t g_singletons_mgr;
static singletons_t g_singletons_mgr;

template <class T>
class mysingleton
{
public:
	static T* ins();
//protected:
	mysingleton() {
		std::cout << "constructing mysingleton(type=";
		std::cout << typeid(T).name() << ")" << std::endl;
	}
	~mysingleton() {
		std::cout << "destroying mysingleton(type=";
		std::cout << typeid(T).name() << ")" << std::endl;
	}
};

template <class T>
T* mysingleton<T>::ins()
{
	std::string _tname = typeid(T).name();
	//static T* pIns = 0;
	T* pIns = (T*)g_singletons_mgr.getSingleton(_tname);
	if (0 == pIns)
	{
		std::lock_guard<std::mutex> lock(g_mut);		
		if (0 == pIns)
		{
			static T _ins;
			pIns = &_ins;
			g_singletons_mgr.addSingleton(typeid(T).name(), pIns);
		}
	}
	return pIns;
}

#define SINGLETONCLASS(class_name)	friend class mysingleton<class_name>; friend class std::shared_ptr<class_name>; friend class std::_Ref_count<class_name>;
#define USESINGLETONCLASS(class_name)	typedef mysingleton<class_name> my##class_name;
