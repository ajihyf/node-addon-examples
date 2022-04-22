#include <naah.h>
#include <stdio.h>

static void ArrayConsumer(const int32_t* array, size_t length) {
  for (size_t index = 0; index < length; index++) {
    fprintf(stderr, "array[%lu] = %d\n", index, array[index]);
  }
}

static void AcceptArrayBuffer(Napi::ArrayBuffer buf) {
  ArrayConsumer(reinterpret_cast<int32_t*>(buf.Data()),
                buf.ByteLength() / sizeof(int32_t));
}

NAAH_REGISTRATION {
  naah::Registration::Function<AcceptArrayBuffer>("AcceptArrayBuffer");
}

NAAH_EXPORT
