#include "sync.h"    // NOLINT(build/include)
#include "pi_est.h"  // NOLINT(build/include)

// Simple synchronous access to the `Estimate()` function
double CalculateSync(int points) {
  return Estimate(points);
}
