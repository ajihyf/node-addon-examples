#include <naah.h>

naah::AsyncWork<void> StartThread(uint32_t prime_count,
                                  uint32_t report_every,
                                  std::function<void(uint32_t)> cb) {
  return [prime_count, report_every, cb = std::move(cb)] {
    uint32_t idx_inner, idx_outer;
    uint32_t i = 0;

    // Find the first 1000 prime numbers using an extremely inefficient
    // algorithm.
    for (idx_outer = 2; i < prime_count; idx_outer++) {
      for (idx_inner = 2; idx_inner < idx_outer; idx_inner++) {
        if (idx_outer % idx_inner == 0) {
          break;
        }
      }
      if (idx_inner < idx_outer) {
        continue;
      }
      ++i;

      if ((i % report_every) == 0) {
        cb(idx_outer);
      }
    }
  };
}

NAAH_REGISTRATION {
  naah::Registration::Function<StartThread>("startThread");
}

NAAH_EXPORT