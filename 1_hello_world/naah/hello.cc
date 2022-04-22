#include <naah.h>

NAAH_REGISTRATION {
  naah::Registration::Function("hello", [] { return "world"; });
}

NAAH_EXPORT
