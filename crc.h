//////////////////////////////////////////////////////////////////////////////
////////////////////// CRC 32/64 calculator for x86-64 ///////////////////////
//////////////////////////////////////////////////////////////////////////////
#pragma once
#include <stdint.h>
#include <stddef.h>
#ifdef __cplusplus
#ifdef USE_BOOST_LIB
#include <boost/crc.hpp>
#endif
#endif
#ifndef TINYCRC_INLINE
#ifdef __cplusplus
#define TINYCRC_INLINE __inline__
#else
#define TINYCRC_INLINE static __inline__
#endif
#endif

#ifdef __cplusplus
namespace tinycrc {
extern const uint32_t __crc32_table[256];
extern const uint64_t __crc64_table[256];
#else
extern const uint32_t __crc32_table[];
extern const uint64_t __crc64_table[];
#endif

/**
 * Get standard CRC32(which the polynomial is 0x04C11DB7) value.
 */
TINYCRC_INLINE uint32_t crc32(const void* data, size_t nbytes)
{
    uint32_t crc = 0xFFFFFFFF;
    for (size_t i = 0; i < nbytes; ++i) {
        uint8_t k = ((uint8_t*)data)[i];
        crc = __crc32_table[((uint8_t)(crc) ^ k) & 0xFF] ^ (crc >> 8);
    }
    return (crc ^ 0xFFFFFFFF);

}

/**
 * Get CRC64(which the polynomial is 0xad93d23594c935a9) value.
 */
TINYCRC_INLINE uint64_t crc64(const void* data, size_t nbytes)
{
    uint64_t crc = 0;
    for (uint64_t i = 0; i < nbytes; ++i) {
        uint8_t k = ((uint8_t*)data)[i];
        crc = __crc64_table[(uint8_t)(crc) ^ k] ^ (crc >> 8);
    }
    return crc;
}

// If boost library included, these functions maybe faster.
#ifdef USE_BOOST_LIB
// Get standard CRC32 value of data using boost library
TINYCRC_INLINE uint32_t boost_crc32(const void* data, size_t nbytes, uint32_t stc = 0xFFFFFFFF)
{
    constexpr uint32_t polynomial = 0x04C11DB7;
    boost::crc_optimal<32, polynomial, uint32_t(-1), uint32_t(-1), true, true> sum(stc);
    sum.process_bytes(data, nbytes);
    return sum.checksum();
}

// Get standard CRC32-C value of data using boost library
TINYCRC_INLINE uint32_t boost_crc32c(const void* data, size_t nbytes, uint32_t stc = 0xFFFFFFFF)
{
    constexpr uint32_t polynomial = 0x1EDC6F41;
    boost::crc_optimal<32, polynomial, uint32_t(-1), uint32_t(-1), true, true> sum(stc);
    sum.process_bytes(data, nbytes);
    return sum.checksum();
}

// Get standard CRC64-Jones value of data using boost library, it's not standard CRC64.
TINYCRC_INLINE uint64_t boost_crc64(const void* data, size_t nbytes, uint64_t stc = 0)
{
    constexpr uint64_t polynomial = 0xAD93D23594C935A9;
    boost::crc_optimal<64, polynomial, uint64_t(-1), uint64_t(0), true, true> sum(stc);
    sum.process_bytes(data, nbytes);
    return sum.checksum();
}
#endif // USE_BOOST_LIB


#ifdef __cplusplus
} // end namespace tinycrc
#endif



