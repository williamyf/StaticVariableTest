#pragma once
#include "dllexport.h"
#include <iostream>
#include <thread>
#include <mutex>

extern PUBFUN_EXPORT std::mutex g_mut;

template <class T>
class mysingleton
{
public:
	static T* ins();
protected:
	mysingleton() {
		std::cout << "constructing mysingleton..." << std::endl;
	}
	~mysingleton() {
		std::cout << "destroying mysingleton..." << std::endl;
	}
};

template <class T>
T* mysingleton<T>::ins()
{
	static T* pIns = 0;
	if (0 == pIns)
	{
		std::lock_guard<std::mutex> lock(g_mut);		
		if (0 == pIns)
		{
			static T _ins;
			pIns = &_ins;
		}
	}
	return pIns;
}

#define SINGLETONCLASS(class_name)	friend class mysingleton<class_name>; friend class std::shared_ptr<class_name>; friend class std::_Ref_count<class_name>;
#define USESINGLETONCLASS(class_name)	typedef mysingleton<class_name> my##class_name;
