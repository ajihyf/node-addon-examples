#include <naah.h>
#include "myobject.h"

MyObject CreateObject(double arg) {
  return MyObject::NewInstance(arg);
}

NAAH_REGISTRATION {
  naah::Registration::Function<CreateObject>("createObject");
}

NAAH_EXPORT
