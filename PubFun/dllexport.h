#pragma once

#ifdef PUBFUN_EXPORTS
#define PUBFUN_EXPORT	__declspec(dllexport)
#else
#define PUBFUN_EXPORT	__declspec(dllimport)
#endif


#ifdef PUBFUN_EXPORTS
#define PUBFUNEXPORT	__declspec(dllexport)
#else
#define PUBFUNEXPORT	
#endif


#define BOOST_ALL_DYN_LINK