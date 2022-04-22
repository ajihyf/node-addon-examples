#include <naah.h>

void RunCallback(std::function<void(std::string)> cb) {
  cb("hello world");
}

NAAH_REGISTRATION {
  naah::Registration::Function<RunCallback>("runCallback");
}

NAAH_EXPORT
