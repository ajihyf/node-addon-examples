#include "myobject.h"
#include <napi.h>
#include <uv.h>

MyObject::MyObject(double val) : val_(val){};

MyObject MyObject::NewInstance(double arg) {
  return MyObject(arg);
}

NAAH_REGISTRATION {
  naah::Registration::Class<MyObject>("MyObject").Constructor<double>();
}
