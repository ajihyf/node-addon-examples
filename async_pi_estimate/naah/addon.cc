#include <napi.h>
#include "async.h"  // NOLINT(build/include)
#include "sync.h"   // NOLINT(build/include)

// Expose synchronous and asynchronous access to our
// Estimate() function
NAAH_REGISTRATION {
  naah::Registration::Function<CalculateSync>("calculateSync");
  naah::Registration::Function<CalculateAsync>("calculateAsync");
}

NAAH_EXPORT
