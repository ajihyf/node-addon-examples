#include <naah.h>
#include <thread>

naah::AsyncWork<void> runSimpleAsyncWorker(
    uint32_t runtime,
    std::function<void(std::optional<naah::Error>, std::optional<std::string>)>
        cb) {
  return [runtime, cb = std::move(cb)] {
    std::this_thread::sleep_for(std::chrono::seconds(runtime));
    if (runtime == 4) {
      cb(naah::Error("Oops! Failed after 'working' 4 seconds."), {});
    } else {
      cb({},
         "SimpleAsyncWorker returning after 'working' " +
             std::to_string(runtime) + " seconds.");
    }
  };
}

NAAH_REGISTRATION {
  naah::Registration::Function<runSimpleAsyncWorker>("runSimpleAsyncWorker");
}

NAAH_EXPORT
