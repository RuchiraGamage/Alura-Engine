#pragma once
#include"Core.h"

namespace Alura {

	class ALURA_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void run();
	};

	//to be define in client
	Application* createApplication();

}
