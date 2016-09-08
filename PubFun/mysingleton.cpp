#include "mysingleton.h"
#include <iostream>
//
//template <class T>
//std::shared_ptr<T> mysingleton<T>::_ins;
//
//template <class T>
//std::mutex mysingleton<T>::_mut;
std::mutex g_mut;
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
