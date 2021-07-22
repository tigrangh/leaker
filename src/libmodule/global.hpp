#pragma once

#include <leaker/global.hpp>

#if defined(MODULE_LIBRARY)
#define MODULESHARED_EXPORT LEAKER_EXPORT
#else
#define MODULESHARED_EXPORT LEAKER_IMPORT
#endif

