#pragma once
#include "dllexport.h"
#include <iostream>

class PUBFUN_EXPORT mysingleton
{
public:
	static mysingleton& ins() {
		return _ins;
	}
	void increase() { _count++; }
	void decrease() { _count--; }
	int count() const { return _count; }
private:
	mysingleton() : _count(0) {
		std::cout << "constructing mysingleton..." << std::endl;
	}
	~mysingleton() {
		std::cout << "destroying mysingleton..." << std::endl;
	}
	static mysingleton _ins;

	int _count;
};