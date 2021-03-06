#pragma once

#include <library/digest/crc32c/crc32c.h>

// Threadsafe
inline ui64 CalcChecksum(const void* p, int size) {
    return Crc32c(p, size);
}
