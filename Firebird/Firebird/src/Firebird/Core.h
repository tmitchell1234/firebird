#pragma once

#ifdef FB_PLATFORM_WINDOWS
	#ifdef FB_BUILD_DLL
		#define FIREBIRD_API __declspec(dllexport)
	#else
		#define FIREBIRD_API __declspec(dllimport)
	#endif
#else
	#error Firebird only supports Windows!
#endif
