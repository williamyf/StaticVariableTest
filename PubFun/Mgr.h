#pragma once
#include "dllexport.h"
#include <boost/thread.hpp>
#include <boost/container/detail/singleton.hpp>
#include <boost/thread/detail/singleton.hpp>
#include <boost/serialization/singleton.hpp>
#include <boost/pool/singleton_pool.hpp>

class /*PUBFUN_EXPORT*/ Mgr : public boost::serialization::singleton<Mgr>
{
public:
	void increase() { _count++; }
	void decrease() { _count--; }
	int count() const { return _count; }
private:
	friend class boost::detail::thread::singleton<Mgr>;
	friend class boost::container::container_detail::singleton_default<Mgr>;
	friend class boost::serialization::singleton<Mgr>;
	Mgr();
	~Mgr();
	int _count;
};
//typedef boost::container::container_detail::singleton_default<Mgr> MgrAgent;
//typedef boost::detail::thread::singleton<Mgr> MgrAgent;
//typedef boost::serialization::singleton<Mgr> MgrAgent;

