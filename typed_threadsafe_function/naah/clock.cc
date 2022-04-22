#include <naah.h>
#include <chrono>
#include <thread>

bool Start(std::function<void(uint32_t)> cb, int count) {
  std::thread([cb = std::move(cb), count] {
    for (int i = 0; i < count; i++) {
      cb(clock());

      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
  }).detach();
  return true;
}

NAAH_REGISTRATION {
  naah::Registration::Function<Start>("start");
}

NAAH_EXPORT