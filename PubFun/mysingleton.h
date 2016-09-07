#pragma once
#include "dllexport.h"
#include <iostream>
#include <thread>
#include <mutex>

template <class T>
class mysingleton
{
public:
	static T* ins();
private:
	mysingleton() {
		std::cout << "constructing mysingleton..." << std::endl;
	}
	~mysingleton() {
		std::cout << "destroying mysingleton..." << std::endl;
	}
	static std::mutex _mut;
	static std::auto_ptr<T> _ins;
};

template <class T>
std::auto_ptr<T> mysingleton<T>::_ins;

template <class T>
std::mutex mysingleton<T>::_mut;

template <class T>
T* mysingleton<T>::ins()
{
	if (0 == _ins.get())
	{
		//std::lock_guard<std::mutex> lock(_mut);
		if (0 == _ins.get())
		{
			_ins.reset(new T());
		}
	}
	return _ins.get();
}

#define SINGLETONCLASS(class_name)	friend class mysingleton<class_name>; friend class std::auto_ptr<class_name>;
#define USESINGLETONCLASS(class_name)	typedef mysingleton<class_name> my##class_name;
