#pragma once

#if defined (MOZPROFILER_EXPORTS) 
	#define MOZPROFILER_API __declspec(dllexport)
#else
	#define MOZPROFILER_API __declspec(dllimport)
#endif
