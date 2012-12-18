#pragma once

namespace moz_profiler
{
	template <typename T>
	class Singleton
	{
	public:
		static T& Instance()
		{

		}

	private:
		Singleton() {}
		~ Singleton() {}

	private:

	};
}