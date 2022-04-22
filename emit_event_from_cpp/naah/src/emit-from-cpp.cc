#include <naah.h>
#include <future>

std::string CallEmit(
    std::function<void(std::string, std::optional<std::string>)> cb) {
  cb("start", {});

  for (int i = 0; i < 3; i++) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    cb("data", "data ...");
  }
  cb("end", {});

  return "Ok";
}

NAAH_REGISTRATION {
  naah::Registration::Function<CallEmit>("callEmit");
}

NAAH_EXPORT
