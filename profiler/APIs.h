#pragma once

#include "exports.h"

extern "C" 
{
	MOZPROFILER_API void  _penter();

	MOZPROFILER_API void  _pexit();

	// param1: mega bytes
	MOZPROFILER_API void Initialize(int log_buffer_size);

	MOZPROFILER_API void WriteLog();

	// return: elapsed milliseconds
	MOZPROFILER_API unsigned int GetElapsedTime();
}

