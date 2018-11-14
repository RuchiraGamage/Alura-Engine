
#include<Alura.h>

class SandBox :public Alura::Application{
public:
	SandBox(){

	}
	~SandBox() {

	}

};

Alura::Application* Alura::createApplication() {
	return new SandBox();
}
