#pragma once

#ifdef MIDMODULE2_EXPORTS
#define MIDMODULE2_EXPORT	__declspec(dllexport)
#else
#define MIDMODULE2_EXPORT	__declspec(dllimport)
#endif

//#define BOOST_ALL_DYN_LINK