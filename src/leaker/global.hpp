#pragma once

#if defined _MSC_VER

#define B_OS_WINDOWS

#define UNICODE
#define _UNICODE

#ifdef BUILD_SHARED_LIBS
#define LEAKER_EXPORT __declspec(dllexport)
#define LEAKER_IMPORT __declspec(dllimport)
#else
#define LEAKER_EXPORT
#define LEAKER_IMPORT
#endif

#define LEAKER_LOCAL

#elif defined __APPLE__

#define B_OS_MACOS

#ifdef BUILD_SHARED_LIBS
#define LEAKER_EXPORT __attribute__ ((visibility ("default")))
#define LEAKER_IMPORT
#define LEAKER_LOCAL __attribute__ ((visibility ("hidden")))
#else
#define LEAKER_EXPORT
#define LEAKER_IMPORT
#define LEAKER_LOCAL
#endif

#else

#define B_OS_LINUX

#ifdef BUILD_SHARED_LIBS
#define LEAKER_EXPORT __attribute__ ((visibility ("default")))
#define LEAKER_IMPORT
#define LEAKER_LOCAL __attribute__ ((visibility ("hidden")))
#else
#define LEAKER_EXPORT
#define LEAKER_IMPORT
#define LEAKER_LOCAL
#endif

#endif