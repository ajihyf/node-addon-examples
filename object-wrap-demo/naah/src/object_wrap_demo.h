#pragma once

#include <naah.h>

class ObjectWrapDemo : naah::Class {
 public:
  ObjectWrapDemo(std::string greeterName);
  std::string_view Greet(std::string name);

 private:
  std::string _greeterName;
};
