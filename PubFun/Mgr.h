#pragma once
#include "mysingleton.h"

class PUBFUN_EXPORT Mgr
{
public:
	void increase() { _count++; }
	void decrease() { _count--; }
	int count() const { return _count; }
private:
	SINGLETONCLASS(Mgr)
	Mgr();
	~Mgr();
	int _count;
};
USESINGLETONCLASS(Mgr)