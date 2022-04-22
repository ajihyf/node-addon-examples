#include "async.h"  // NOLINT(build/include)
#include <napi.h>
#include "pi_est.h"  // NOLINT(build/include)

// Asynchronous access to the `Estimate()` function
naah::AsyncWork<void> CalculateAsync(
    int points, std::function<void(naah::Undefined, double)> cb) {
  return [points, cb = std::move(cb)] { cb({}, Estimate(points)); };
}
