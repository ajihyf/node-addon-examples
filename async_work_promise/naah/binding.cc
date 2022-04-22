#include <naah.h>

naah::AsyncWork<std::vector<uint32_t>> StartWork(uint32_t prime_count) {
  return [prime_count] {
    std::vector<uint32_t> result(prime_count);
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

      result[i] = idx_outer;
      ++i;
    }

    return result;
  };
}

NAAH_REGISTRATION {
  naah::Registration::Function<StartWork>("startWork");
}

NAAH_EXPORT