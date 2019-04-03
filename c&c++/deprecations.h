/*Deprecations*/
#ifdef __GNUC__
#ifdef _WIN32
#include <windows.h>
#define DEPRECATED __attribute__((deprecated))
#elif defined(_MSC_VER)
#define DEPRECATED __declspec(deprecated)
#else
#define DEPRECATED
#pragma message("DEPRECATED is not defined")
#endif
