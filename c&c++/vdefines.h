#ifdef _WIN32
#ifdef  BUILDING_CORE
#define VANIR_CORE_API __declspec(dllexport)
#define VANIR_PLUGIN_API __declspec(dllimport)
#else
#define VANIR_CORE_API __declspec(dllimport)
#define VANIR_PLUGIN_API __declspec(dllexport)
#endif
#else
#define VANIR_CORE_API
#define VANIR_PLUGIN_API
#endif