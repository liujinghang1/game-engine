#pragma once
#include "core.h"
namespace Hazel {

	class HAZEL_API application
	{
	public:
		application();
		virtual ~application();
		void run();
	};
	// to be defined in client
	application* CreateApplication();
}
