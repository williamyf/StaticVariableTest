#pragma once

#ifdef MIDMODULE1_EXPORTS
#define MIDMODULE1_EXPORT	__declspec(dllexport)
#else
#define MIDMODULE1_EXPORT	__declspec(dllimport)
#endif