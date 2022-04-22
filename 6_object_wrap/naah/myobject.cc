#include "myobject.h"

MyObject::MyObject(double value) : value_(value) {}

double MyObject::GetValue() {
  return value_;
}

double MyObject::PlusOne() {
  value_ += 1;
  return value_;
}

MyObject MyObject::Multiply(std::optional<double> multiple) {
  return MyObject(value_ * multiple.value_or(1));
}

NAAH_REGISTRATION {
  naah::Registration::Class<MyObject>("MyObject")
      .Constructor<double>()
      .InstanceMethod<&MyObject::GetValue>("value")
      .InstanceMethod<&MyObject::PlusOne>("plusOne")
      .InstanceMethod<&MyObject::Multiply>("multiply");
}
