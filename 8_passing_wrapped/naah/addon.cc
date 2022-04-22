#include <naah.h>
#include "myobject.h"

using namespace Napi;

MyObject CreateObject(double arg) {
  return MyObject::NewInstance(arg);
}

double Add(MyObject* obj1, MyObject* obj2) {
  return obj1->Val() + obj2->Val();
}

NAAH_REGISTRATION {
  naah::Registration::Function<CreateObject>("createObject");
  naah::Registration::Function<Add>("add");
}

NAAH_EXPORT
