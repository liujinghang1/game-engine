#include <Hazel.h>


class sandbox : public Hazel::application {
public:
	sandbox() {

	}
	~sandbox() {

	}
};

Hazel::application* Hazel::CreateApplication() {
	return new sandbox();
}