//PLUGIN API FOR VANIR
#include "vdefines.h"
#include "vrex.h"

#define V_CORE_FUNC extern "C" VANIR_CORE_API
#define V_PLUGIN_FUNC extern "C" VANIR_PLUGIN_API

#define PLUGIN_INIT()V_PLUGIN_FUNC int PluginInit()
#define PLUGIN_FREE()V_PLUGIN_FUNC int PluginFree()

typedef Vrex*(VrexInitFunc)();
typedef void(*VrexFreeFunc)(Vrex*);

V_CORE_FUNC void carborate(const char*type,

VrexFreeFunc free_v,
VrexInitFunc init_v);