// Simple test of tiny-crc
#include <cstdio>
#include <string>
#include <time.h>
#include "crc.h"


int main(int argc, char **argv)
{
    using namespace tinycrc;

    // Do Not change the values below!!!
    const uint32_t answer32 = (0x839A0189);
    const uint64_t answer64 = (0xFE0B022DEF83C224);
    const std::string str = "When you invoke GCC, it normally does preprocessing, compilation, assembly and linking.";

    uint32_t c32 = 0;
    uint64_t c64 = 0;
    time_t t = time(0);

#ifndef USE_BOOST_LIB
    c32 = crc32(str.data(), str.size());
    printf("CRC32: hex 0x%08X  dec %u\n", c32, c32);
    printf("Invoke 10,000,000 times: ");
    fflush(stdout);
    for (int i = 0; i < 10000000; ++i) {
        if ((c32 = crc32(str.data(), str.size())) != answer32) {
            printf("Error: 0x%08X\n", c32);
            break;
        }
    }
    printf("%ldseconds\n\n", time(0) - t);

    t = time(0);
    c64 = crc64(str.data(), str.size());
    printf("CRC64: hex 0x%16lX  dec %zu\n", c64, c64);
    printf("Invoke 10,000,000 times: ");
    fflush(stdout);
    for (int i = 0; i < 10000000; ++i) {
        if ((c64 = crc64(str.data(), str.size())) != answer64) {
            printf("Error: 0x%16lX\n", c64);
            break;
        }
    }
    printf("%ldseconds\n\n", time(0) - t);
#endif

#ifdef USE_BOOST_LIB
    const uint32_t answer32C = (0xFDB2E7B8);

    t = time(0);
    c32 = boost_crc32(str.data(), str.size());
    printf("CRC32-boost: hex 0x%08X  dec %u\n", c32, c32);
    printf("Invoke 10,000,000 times: ");
    fflush(stdout);
    for (int i = 0; i < 10000000; ++i) {
        if ((c32 = boost_crc32(str.data(), str.size())) != answer32) {
            printf("Error: 0x%08X\n", c32);
            break;
        }
    }
    printf("%ldseconds\n\n", time(0) - t);

    t = time(0);
    c32 = boost_crc32c(str.data(), str.size());
    printf("CRC32-C-boost: hex 0x%08X  dec %u\n", c32, c32);
    printf("Invoke 10,000,000 times: ");
    fflush(stdout);
    for (int i = 0; i < 10000000; ++i) {
        if ((c32 = boost_crc32c(str.data(), str.size())) != answer32C) {
            printf("Error: 0x%08X\n", c32);
            break;
        }
    }
    printf("%ldseconds\n\n", time(0) - t);

    t = time(0);
    c64 = boost_crc64(str.data(), str.size());
    printf("CRC64-boost: hex 0x%16lX  dec %zu\n", c64, c64);
    printf("Invoke 10,000,000 times: ");
    fflush(stdout);
    for (int i = 0; i < 10000000; ++i) {
        if ((c64 = boost_crc64(str.data(), str.size())) != answer64) {
            printf("Error: 0x%16lX\n", c64);
            break;
        }
    }
    printf("%ldseconds\n\n", time(0) - t);
#endif

    return 0;
}
