#include "object_wrap_demo.h"

ObjectWrapDemo::ObjectWrapDemo(std::string greeterName)
    : _greeterName(std::move(greeterName)) {}

std::string_view ObjectWrapDemo::Greet(std::string name) {
  printf("Hello %s\n", name.c_str());
  printf("I am %s\n", this->_greeterName.c_str());

  return this->_greeterName;
}

NAAH_REGISTRATION {
  naah::Registration::Class<ObjectWrapDemo>("ObjectWrapDemo")
      .Constructor<std::string>()
      .InstanceMethod<&ObjectWrapDemo::Greet>("greet");
}

NAAH_EXPORT
