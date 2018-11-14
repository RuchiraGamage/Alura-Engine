#pragma once

#ifdef AL_WINDOWS_PLATFORM
	#ifdef AL_BUILD_DLL
		#define ALURA_API _declspec(dllexport)//should be active when create dll in Alura project
	#else
		#define _declspec(dllimport)//this should be activated when sandbox use it
	#endif // AL_BUILD_DLL
#else
	#error ALURA ONLY SUPPORT FOR WINDOWS
#endif // AL_WINDOWS_PLATFORM
