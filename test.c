// Simple test of tiny-crc
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "crc.h"


int main(int argc, char **argv)
{
    // Do Not change the values below!!!
    const uint32_t answer32 = (0x839A0189);
    const uint64_t answer64 = (0xFE0B022DEF83C224);
    const char* str = "When you invoke GCC, it normally does preprocessing, compilation, assembly and linking.";
    const size_t len = strlen(str);

    uint32_t c32 = crc32(str, len);
    printf("CRC32: hex 0x%08X  dec %u\n", c32, c32);

    time_t t = clock();
    printf("Invoke 10,000,000 times: ");
    fflush(stdout);

    for (int i = 0; i < 10000000; ++i) {
        if ((c32 = crc32(str, len)) != answer32) {
            printf("Error: 0x%08X\n", c32);
            break;
        }
    }
    printf("%.2f seconds\n\n", (clock() - t)/(double)CLOCKS_PER_SEC);

    uint64_t c64 = crc64(str, len);
    printf("CRC64: hex 0x%16lX  dec %zu\n", c64, c64);

    t = clock();
    printf("Invoke 10,000,000 times: ");
    fflush(stdout);

    for (int i = 0; i < 10000000; ++i) {
        if ((c64 = crc64(str, len)) != answer64) {
            printf("Error: 0x%16lX\n", c64);
            break;
        }
    }
    printf("%.2f seconds\n\n", (clock() - t)/(double)CLOCKS_PER_SEC);

    return 0;
}


