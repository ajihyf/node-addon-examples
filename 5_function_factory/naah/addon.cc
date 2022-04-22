#include <naah.h>

auto CreateFunction() {
  return [] { return "hello world"; };
}

NAAH_REGISTRATION {
  using reg = naah::Registration;

  reg::Function<CreateFunction>("createFunction");
}

NAAH_EXPORT
