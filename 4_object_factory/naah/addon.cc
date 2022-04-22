#include <naah.h>

struct Obj : naah::Object {
  std::string msg;
};

Obj CreateObject(std::string msg) {
  return Obj{{}, msg};
}

NAAH_REGISTRATION {
  using reg = naah::Registration;

  reg::Object<Obj>().Member<&Obj::msg>("msg");
  reg::Function<CreateObject>("createObject");
}

NAAH_EXPORT
