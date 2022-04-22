#include <naah.h>

double Add(double a, double b) {
  return a + b;
}

NAAH_REGISTRATION {
  naah::Registration::Function<Add>("add");
}

NAAH_EXPORT
