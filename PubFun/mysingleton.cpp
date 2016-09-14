#include "mysingleton.h"
#include <iostream>
#include <string>
//
//template <class T>
//std::shared_ptr<T> mysingleton<T>::_ins;
//
//template <class T>
//std::mutex mysingleton<T>::_mut;

// mysingleton::mysingleton()
// {
// 	std::cout << "constructing mysingleton..." << std::endl;
// }
// 
// 
// mysingleton::~mysingleton()
// {
// 	std::cout << "destroying mysingleton..." << std::endl;
// }

singletons_t::singletons_t()
{
	std::cout << "^^^^^^^^^^^^^^^^^^^" << std::endl;
}

singletons_t::~singletons_t()
{
	std::cout << "$$$$$$$$$$$$$$$$$$$" << std::endl;
	for (auto iter = _singtons.begin(); iter != _singtons.end(); ++iter)
	{
		std::cout << iter->first << std::endl;
	}
}

