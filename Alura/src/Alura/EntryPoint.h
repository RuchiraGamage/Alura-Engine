#pragma once

#ifdef AL_WINDOWS_PLATFORM

extern Alura::Application* Alura::createApplication(); //find the function somewhere else

void main(int argc,char** argv) {

	auto app= Alura::createApplication();
	app->run();
	delete app;
}

#endif 

