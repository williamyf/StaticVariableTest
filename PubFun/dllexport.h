#pragma once

#ifdef PUBFUN_EXPORTS
#define PUBFUN_EXPORT	__declspec(dllexport)
#else
#define PUBFUN_EXPORT	__declspec(dllimport)
#endif