#pragma once
#ifdef HZ_PLATFORM_WINDOW

extern Hazel::application* CreateApplication();
int main(int argc, char** argv) {
	printf("Hazel engine");
	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}
#endif