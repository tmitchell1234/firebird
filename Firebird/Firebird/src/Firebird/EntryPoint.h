#pragma once

#ifdef FB_PLATFORM_WINDOWS

extern Firebird::Application* Firebird::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hello!\n");
	auto app = Firebird::CreateApplication();
	app->Run();
	delete app;
}
#endif
