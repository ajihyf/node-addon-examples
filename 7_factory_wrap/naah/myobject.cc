#include "myobject.h"
#include <napi.h>
#include <uv.h>

using namespace Napi;

MyObject::MyObject(double value) : counter_(value){};

MyObject MyObject::NewInstance(double arg) {
  return MyObject(arg);
}

double MyObject::PlusOne() {
  counter_ += 1;
  return counter_;
}

NAAH_REGISTRATION {
  naah::Registration::Class<MyObject>("MyObject")
      .Constructor<double>()
      .InstanceMethod<&MyObject::PlusOne>("plusOne");
}
