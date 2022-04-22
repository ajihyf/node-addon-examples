#include <naah.h>

NAAH_REGISTRATION {
  naah::Registration::Function("hello", [] { return "Hello, world!"; });
}

NAAH_EXPORT
