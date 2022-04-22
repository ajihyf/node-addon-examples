#ifndef EXAMPLES_ASYNC_PI_ESTIMATE_ASYNC_H_
#define EXAMPLES_ASYNC_PI_ESTIMATE_ASYNC_H_

#include <naah.h>

naah::AsyncWork<void> CalculateAsync(
    int points, std::function<void(naah::Undefined, double)> cb);

#endif  // EXAMPLES_ASYNC_PI_ESTIMATE_ASYNC_H_
