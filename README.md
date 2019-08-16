# tiny-crc

 * A tiny CRC32/64 library for C/C++
 * No dependency, support c99, c++11 and boost library
 * Only one header and source file.
 

### Build and test:
> make test  


### Example:
```c
#include "crc.h"
void thats_all()
{
    const char* s = "Hello Python4";
    uint32_t val = crc32(s, strlen(s));
}
```
```cpp
#include "crc.h"
void thats_all()
{
    std::string s = "Hello Python4";
    uint32_t val = crc32(s.data(), s.size());
    
    // In cpp, also boost version
    #ifdef USE_BOOST_LIB
    val = boost_crc32(s.data(), s.size());
    #endif
}
```

See test.c and test.cpp for more details.  

# Performance
Test a string with 80 characters length on intel-corei5 CPU for 10,000,000 invokes:  
* CRC32 : 2seconds  
* CRC64 : 2seconds  
* Boost-CRC32 : 2seconds  
* Boost-CRC64 : 2seconds  
* Boost-CRC32-C : 2seconds  




