#pragma once

#include <stddef.h>
#include <stdint.h>

struct FakeParcel {
    unsigned char* data;
    size_t cur;

    void skip(size_t skip);
    uint32_t readInt32();
    char16_t* readString16(uint32_t len);
    bool enforceInterface(size_t, uint8_t);
};
