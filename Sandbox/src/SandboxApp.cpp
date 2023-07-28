#include <Firebird.h>

class Sandbox : public Firebird::Application {
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Firebird::Application* Firebird::CreateApplication()
{
	return new Sandbox();
}