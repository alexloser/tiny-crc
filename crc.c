// Don't use this file in user's source, it's internal details and Don't change anything!
#include <stdint.h>
#ifdef  __cplusplus
#define CRCTB_ALIGN alignas(32)
#else
#define CRCTB_ALIGN __attribute__((aligned(32))) const
#endif

#ifdef  __cplusplus
namespace tinycrc {
#endif


//////////////////////////////////////////////////////////////////////////////
// CRC-64-jones constants table
// It's polynomial is 0xAD93D23594C935A9 and stc is 0
// Params: Reflected In: True, Xor_In: 0xffffffffffffffff
// Reflected_Out: True, Xor_Out: 0x0
 //////////////////////////////////////////////////////////////////////////////
CRCTB_ALIGN uint64_t __crc64_table[256] =
{
    (uint64_t)(0x0000000000000000), (uint64_t)(0x7ad870c830358979), (uint64_t)(0xf5b0e190606b12f2), (uint64_t)(0x8f689158505e9b8b),
    (uint64_t)(0xc038e5739841b68f), (uint64_t)(0xbae095bba8743ff6), (uint64_t)(0x358804e3f82aa47d), (uint64_t)(0x4f50742bc81f2d04),
    (uint64_t)(0xab28ecb46814fe75), (uint64_t)(0xd1f09c7c5821770c), (uint64_t)(0x5e980d24087fec87), (uint64_t)(0x24407dec384a65fe),
    (uint64_t)(0x6b1009c7f05548fa), (uint64_t)(0x11c8790fc060c183), (uint64_t)(0x9ea0e857903e5a08), (uint64_t)(0xe478989fa00bd371),
    (uint64_t)(0x7d08ff3b88be6f81), (uint64_t)(0x07d08ff3b88be6f8), (uint64_t)(0x88b81eabe8d57d73), (uint64_t)(0xf2606e63d8e0f40a),
    (uint64_t)(0xbd301a4810ffd90e), (uint64_t)(0xc7e86a8020ca5077), (uint64_t)(0x4880fbd87094cbfc), (uint64_t)(0x32588b1040a14285),
    (uint64_t)(0xd620138fe0aa91f4), (uint64_t)(0xacf86347d09f188d), (uint64_t)(0x2390f21f80c18306), (uint64_t)(0x594882d7b0f40a7f),
    (uint64_t)(0x1618f6fc78eb277b), (uint64_t)(0x6cc0863448deae02), (uint64_t)(0xe3a8176c18803589), (uint64_t)(0x997067a428b5bcf0),
    (uint64_t)(0xfa11fe77117cdf02), (uint64_t)(0x80c98ebf2149567b), (uint64_t)(0x0fa11fe77117cdf0), (uint64_t)(0x75796f2f41224489),
    (uint64_t)(0x3a291b04893d698d), (uint64_t)(0x40f16bccb908e0f4), (uint64_t)(0xcf99fa94e9567b7f), (uint64_t)(0xb5418a5cd963f206),
    (uint64_t)(0x513912c379682177), (uint64_t)(0x2be1620b495da80e), (uint64_t)(0xa489f35319033385), (uint64_t)(0xde51839b2936bafc),
    (uint64_t)(0x9101f7b0e12997f8), (uint64_t)(0xebd98778d11c1e81), (uint64_t)(0x64b116208142850a), (uint64_t)(0x1e6966e8b1770c73),
    (uint64_t)(0x8719014c99c2b083), (uint64_t)(0xfdc17184a9f739fa), (uint64_t)(0x72a9e0dcf9a9a271), (uint64_t)(0x08719014c99c2b08),
    (uint64_t)(0x4721e43f0183060c), (uint64_t)(0x3df994f731b68f75), (uint64_t)(0xb29105af61e814fe), (uint64_t)(0xc849756751dd9d87),
    (uint64_t)(0x2c31edf8f1d64ef6), (uint64_t)(0x56e99d30c1e3c78f), (uint64_t)(0xd9810c6891bd5c04), (uint64_t)(0xa3597ca0a188d57d),
    (uint64_t)(0xec09088b6997f879), (uint64_t)(0x96d1784359a27100), (uint64_t)(0x19b9e91b09fcea8b), (uint64_t)(0x636199d339c963f2),
    (uint64_t)(0xdf7adabd7a6e2d6f), (uint64_t)(0xa5a2aa754a5ba416), (uint64_t)(0x2aca3b2d1a053f9d), (uint64_t)(0x50124be52a30b6e4),
    (uint64_t)(0x1f423fcee22f9be0), (uint64_t)(0x659a4f06d21a1299), (uint64_t)(0xeaf2de5e82448912), (uint64_t)(0x902aae96b271006b),
    (uint64_t)(0x74523609127ad31a), (uint64_t)(0x0e8a46c1224f5a63), (uint64_t)(0x81e2d7997211c1e8), (uint64_t)(0xfb3aa75142244891),
    (uint64_t)(0xb46ad37a8a3b6595), (uint64_t)(0xceb2a3b2ba0eecec), (uint64_t)(0x41da32eaea507767), (uint64_t)(0x3b024222da65fe1e),
    (uint64_t)(0xa2722586f2d042ee), (uint64_t)(0xd8aa554ec2e5cb97), (uint64_t)(0x57c2c41692bb501c), (uint64_t)(0x2d1ab4dea28ed965),
    (uint64_t)(0x624ac0f56a91f461), (uint64_t)(0x1892b03d5aa47d18), (uint64_t)(0x97fa21650afae693), (uint64_t)(0xed2251ad3acf6fea),
    (uint64_t)(0x095ac9329ac4bc9b), (uint64_t)(0x7382b9faaaf135e2), (uint64_t)(0xfcea28a2faafae69), (uint64_t)(0x8632586aca9a2710),
    (uint64_t)(0xc9622c4102850a14), (uint64_t)(0xb3ba5c8932b0836d), (uint64_t)(0x3cd2cdd162ee18e6), (uint64_t)(0x460abd1952db919f),
    (uint64_t)(0x256b24ca6b12f26d), (uint64_t)(0x5fb354025b277b14), (uint64_t)(0xd0dbc55a0b79e09f), (uint64_t)(0xaa03b5923b4c69e6),
    (uint64_t)(0xe553c1b9f35344e2), (uint64_t)(0x9f8bb171c366cd9b), (uint64_t)(0x10e3202993385610), (uint64_t)(0x6a3b50e1a30ddf69),
    (uint64_t)(0x8e43c87e03060c18), (uint64_t)(0xf49bb8b633338561), (uint64_t)(0x7bf329ee636d1eea), (uint64_t)(0x012b592653589793),
    (uint64_t)(0x4e7b2d0d9b47ba97), (uint64_t)(0x34a35dc5ab7233ee), (uint64_t)(0xbbcbcc9dfb2ca865), (uint64_t)(0xc113bc55cb19211c),
    (uint64_t)(0x5863dbf1e3ac9dec), (uint64_t)(0x22bbab39d3991495), (uint64_t)(0xadd33a6183c78f1e), (uint64_t)(0xd70b4aa9b3f20667),
    (uint64_t)(0x985b3e827bed2b63), (uint64_t)(0xe2834e4a4bd8a21a), (uint64_t)(0x6debdf121b863991), (uint64_t)(0x1733afda2bb3b0e8),
    (uint64_t)(0xf34b37458bb86399), (uint64_t)(0x8993478dbb8deae0), (uint64_t)(0x06fbd6d5ebd3716b), (uint64_t)(0x7c23a61ddbe6f812),
    (uint64_t)(0x3373d23613f9d516), (uint64_t)(0x49aba2fe23cc5c6f), (uint64_t)(0xc6c333a67392c7e4), (uint64_t)(0xbc1b436e43a74e9d),
    (uint64_t)(0x95ac9329ac4bc9b5), (uint64_t)(0xef74e3e19c7e40cc), (uint64_t)(0x601c72b9cc20db47), (uint64_t)(0x1ac40271fc15523e),
    (uint64_t)(0x5594765a340a7f3a), (uint64_t)(0x2f4c0692043ff643), (uint64_t)(0xa02497ca54616dc8), (uint64_t)(0xdafce7026454e4b1),
    (uint64_t)(0x3e847f9dc45f37c0), (uint64_t)(0x445c0f55f46abeb9), (uint64_t)(0xcb349e0da4342532), (uint64_t)(0xb1eceec59401ac4b),
    (uint64_t)(0xfebc9aee5c1e814f), (uint64_t)(0x8464ea266c2b0836), (uint64_t)(0x0b0c7b7e3c7593bd), (uint64_t)(0x71d40bb60c401ac4),
    (uint64_t)(0xe8a46c1224f5a634), (uint64_t)(0x927c1cda14c02f4d), (uint64_t)(0x1d148d82449eb4c6), (uint64_t)(0x67ccfd4a74ab3dbf),
    (uint64_t)(0x289c8961bcb410bb), (uint64_t)(0x5244f9a98c8199c2), (uint64_t)(0xdd2c68f1dcdf0249), (uint64_t)(0xa7f41839ecea8b30),
    (uint64_t)(0x438c80a64ce15841), (uint64_t)(0x3954f06e7cd4d138), (uint64_t)(0xb63c61362c8a4ab3), (uint64_t)(0xcce411fe1cbfc3ca),
    (uint64_t)(0x83b465d5d4a0eece), (uint64_t)(0xf96c151de49567b7), (uint64_t)(0x76048445b4cbfc3c), (uint64_t)(0x0cdcf48d84fe7545),
    (uint64_t)(0x6fbd6d5ebd3716b7), (uint64_t)(0x15651d968d029fce), (uint64_t)(0x9a0d8ccedd5c0445), (uint64_t)(0xe0d5fc06ed698d3c),
    (uint64_t)(0xaf85882d2576a038), (uint64_t)(0xd55df8e515432941), (uint64_t)(0x5a3569bd451db2ca), (uint64_t)(0x20ed197575283bb3),
    (uint64_t)(0xc49581ead523e8c2), (uint64_t)(0xbe4df122e51661bb), (uint64_t)(0x3125607ab548fa30), (uint64_t)(0x4bfd10b2857d7349),
    (uint64_t)(0x04ad64994d625e4d), (uint64_t)(0x7e7514517d57d734), (uint64_t)(0xf11d85092d094cbf), (uint64_t)(0x8bc5f5c11d3cc5c6),
    (uint64_t)(0x12b5926535897936), (uint64_t)(0x686de2ad05bcf04f), (uint64_t)(0xe70573f555e26bc4), (uint64_t)(0x9ddd033d65d7e2bd),
    (uint64_t)(0xd28d7716adc8cfb9), (uint64_t)(0xa85507de9dfd46c0), (uint64_t)(0x273d9686cda3dd4b), (uint64_t)(0x5de5e64efd965432),
    (uint64_t)(0xb99d7ed15d9d8743), (uint64_t)(0xc3450e196da80e3a), (uint64_t)(0x4c2d9f413df695b1), (uint64_t)(0x36f5ef890dc31cc8),
    (uint64_t)(0x79a59ba2c5dc31cc), (uint64_t)(0x037deb6af5e9b8b5), (uint64_t)(0x8c157a32a5b7233e), (uint64_t)(0xf6cd0afa9582aa47),
    (uint64_t)(0x4ad64994d625e4da), (uint64_t)(0x300e395ce6106da3), (uint64_t)(0xbf66a804b64ef628), (uint64_t)(0xc5bed8cc867b7f51),
    (uint64_t)(0x8aeeace74e645255), (uint64_t)(0xf036dc2f7e51db2c), (uint64_t)(0x7f5e4d772e0f40a7), (uint64_t)(0x05863dbf1e3ac9de),
    (uint64_t)(0xe1fea520be311aaf), (uint64_t)(0x9b26d5e88e0493d6), (uint64_t)(0x144e44b0de5a085d), (uint64_t)(0x6e963478ee6f8124),
    (uint64_t)(0x21c640532670ac20), (uint64_t)(0x5b1e309b16452559), (uint64_t)(0xd476a1c3461bbed2), (uint64_t)(0xaeaed10b762e37ab),
    (uint64_t)(0x37deb6af5e9b8b5b), (uint64_t)(0x4d06c6676eae0222), (uint64_t)(0xc26e573f3ef099a9), (uint64_t)(0xb8b627f70ec510d0),
    (uint64_t)(0xf7e653dcc6da3dd4), (uint64_t)(0x8d3e2314f6efb4ad), (uint64_t)(0x0256b24ca6b12f26), (uint64_t)(0x788ec2849684a65f),
    (uint64_t)(0x9cf65a1b368f752e), (uint64_t)(0xe62e2ad306bafc57), (uint64_t)(0x6946bb8b56e467dc), (uint64_t)(0x139ecb4366d1eea5),
    (uint64_t)(0x5ccebf68aecec3a1), (uint64_t)(0x2616cfa09efb4ad8), (uint64_t)(0xa97e5ef8cea5d153), (uint64_t)(0xd3a62e30fe90582a),
    (uint64_t)(0xb0c7b7e3c7593bd8), (uint64_t)(0xca1fc72bf76cb2a1), (uint64_t)(0x45775673a732292a), (uint64_t)(0x3faf26bb9707a053),
    (uint64_t)(0x70ff52905f188d57), (uint64_t)(0x0a2722586f2d042e), (uint64_t)(0x854fb3003f739fa5), (uint64_t)(0xff97c3c80f4616dc),
    (uint64_t)(0x1bef5b57af4dc5ad), (uint64_t)(0x61372b9f9f784cd4), (uint64_t)(0xee5fbac7cf26d75f), (uint64_t)(0x9487ca0fff135e26),
    (uint64_t)(0xdbd7be24370c7322), (uint64_t)(0xa10fceec0739fa5b), (uint64_t)(0x2e675fb4576761d0), (uint64_t)(0x54bf2f7c6752e8a9),
    (uint64_t)(0xcdcf48d84fe75459), (uint64_t)(0xb71738107fd2dd20), (uint64_t)(0x387fa9482f8c46ab), (uint64_t)(0x42a7d9801fb9cfd2),
    (uint64_t)(0x0df7adabd7a6e2d6), (uint64_t)(0x772fdd63e7936baf), (uint64_t)(0xf8474c3bb7cdf024), (uint64_t)(0x829f3cf387f8795d),
    (uint64_t)(0x66e7a46c27f3aa2c), (uint64_t)(0x1c3fd4a417c62355), (uint64_t)(0x935745fc4798b8de), (uint64_t)(0xe98f353477ad31a7),
    (uint64_t)(0xa6df411fbfb21ca3), (uint64_t)(0xdc0731d78f8795da), (uint64_t)(0x536fa08fdfd90e51), (uint64_t)(0x29b7d047efec8728)
};


//////////////////////////////////////////////////////////////////////////////
// Standard CRC-32 constants table
// It's polynomial is 0x04C11DB7 and stc is 0xffffffff
// Params: Reflected In: True, Xor_In: 0xffffffff
// Reflected_Out: True, Xor_Out: 0xffffffff
//////////////////////////////////////////////////////////////////////////////
CRCTB_ALIGN uint32_t __crc32_table[256] =
{
    (uint32_t)(0x00000000), (uint32_t)(0x77073096), (uint32_t)(0xee0e612c), (uint32_t)(0x990951ba),
    (uint32_t)(0x076dc419), (uint32_t)(0x706af48f), (uint32_t)(0xe963a535), (uint32_t)(0x9e6495a3),
    (uint32_t)(0x0edb8832), (uint32_t)(0x79dcb8a4), (uint32_t)(0xe0d5e91e), (uint32_t)(0x97d2d988),
    (uint32_t)(0x09b64c2b), (uint32_t)(0x7eb17cbd), (uint32_t)(0xe7b82d07), (uint32_t)(0x90bf1d91),
    (uint32_t)(0x1db71064), (uint32_t)(0x6ab020f2), (uint32_t)(0xf3b97148), (uint32_t)(0x84be41de),
    (uint32_t)(0x1adad47d), (uint32_t)(0x6ddde4eb), (uint32_t)(0xf4d4b551), (uint32_t)(0x83d385c7),
    (uint32_t)(0x136c9856), (uint32_t)(0x646ba8c0), (uint32_t)(0xfd62f97a), (uint32_t)(0x8a65c9ec),
    (uint32_t)(0x14015c4f), (uint32_t)(0x63066cd9), (uint32_t)(0xfa0f3d63), (uint32_t)(0x8d080df5),
    (uint32_t)(0x3b6e20c8), (uint32_t)(0x4c69105e), (uint32_t)(0xd56041e4), (uint32_t)(0xa2677172),
    (uint32_t)(0x3c03e4d1), (uint32_t)(0x4b04d447), (uint32_t)(0xd20d85fd), (uint32_t)(0xa50ab56b),
    (uint32_t)(0x35b5a8fa), (uint32_t)(0x42b2986c), (uint32_t)(0xdbbbc9d6), (uint32_t)(0xacbcf940),
    (uint32_t)(0x32d86ce3), (uint32_t)(0x45df5c75), (uint32_t)(0xdcd60dcf), (uint32_t)(0xabd13d59),
    (uint32_t)(0x26d930ac), (uint32_t)(0x51de003a), (uint32_t)(0xc8d75180), (uint32_t)(0xbfd06116),
    (uint32_t)(0x21b4f4b5), (uint32_t)(0x56b3c423), (uint32_t)(0xcfba9599), (uint32_t)(0xb8bda50f),
    (uint32_t)(0x2802b89e), (uint32_t)(0x5f058808), (uint32_t)(0xc60cd9b2), (uint32_t)(0xb10be924),
    (uint32_t)(0x2f6f7c87), (uint32_t)(0x58684c11), (uint32_t)(0xc1611dab), (uint32_t)(0xb6662d3d),
    (uint32_t)(0x76dc4190), (uint32_t)(0x01db7106), (uint32_t)(0x98d220bc), (uint32_t)(0xefd5102a),
    (uint32_t)(0x71b18589), (uint32_t)(0x06b6b51f), (uint32_t)(0x9fbfe4a5), (uint32_t)(0xe8b8d433),
    (uint32_t)(0x7807c9a2), (uint32_t)(0x0f00f934), (uint32_t)(0x9609a88e), (uint32_t)(0xe10e9818),
    (uint32_t)(0x7f6a0dbb), (uint32_t)(0x086d3d2d), (uint32_t)(0x91646c97), (uint32_t)(0xe6635c01),
    (uint32_t)(0x6b6b51f4), (uint32_t)(0x1c6c6162), (uint32_t)(0x856530d8), (uint32_t)(0xf262004e),
    (uint32_t)(0x6c0695ed), (uint32_t)(0x1b01a57b), (uint32_t)(0x8208f4c1), (uint32_t)(0xf50fc457),
    (uint32_t)(0x65b0d9c6), (uint32_t)(0x12b7e950), (uint32_t)(0x8bbeb8ea), (uint32_t)(0xfcb9887c),
    (uint32_t)(0x62dd1ddf), (uint32_t)(0x15da2d49), (uint32_t)(0x8cd37cf3), (uint32_t)(0xfbd44c65),
    (uint32_t)(0x4db26158), (uint32_t)(0x3ab551ce), (uint32_t)(0xa3bc0074), (uint32_t)(0xd4bb30e2),
    (uint32_t)(0x4adfa541), (uint32_t)(0x3dd895d7), (uint32_t)(0xa4d1c46d), (uint32_t)(0xd3d6f4fb),
    (uint32_t)(0x4369e96a), (uint32_t)(0x346ed9fc), (uint32_t)(0xad678846), (uint32_t)(0xda60b8d0),
    (uint32_t)(0x44042d73), (uint32_t)(0x33031de5), (uint32_t)(0xaa0a4c5f), (uint32_t)(0xdd0d7cc9),
    (uint32_t)(0x5005713c), (uint32_t)(0x270241aa), (uint32_t)(0xbe0b1010), (uint32_t)(0xc90c2086),
    (uint32_t)(0x5768b525), (uint32_t)(0x206f85b3), (uint32_t)(0xb966d409), (uint32_t)(0xce61e49f),
    (uint32_t)(0x5edef90e), (uint32_t)(0x29d9c998), (uint32_t)(0xb0d09822), (uint32_t)(0xc7d7a8b4),
    (uint32_t)(0x59b33d17), (uint32_t)(0x2eb40d81), (uint32_t)(0xb7bd5c3b), (uint32_t)(0xc0ba6cad),
    (uint32_t)(0xedb88320), (uint32_t)(0x9abfb3b6), (uint32_t)(0x03b6e20c), (uint32_t)(0x74b1d29a),
    (uint32_t)(0xead54739), (uint32_t)(0x9dd277af), (uint32_t)(0x04db2615), (uint32_t)(0x73dc1683),
    (uint32_t)(0xe3630b12), (uint32_t)(0x94643b84), (uint32_t)(0x0d6d6a3e), (uint32_t)(0x7a6a5aa8),
    (uint32_t)(0xe40ecf0b), (uint32_t)(0x9309ff9d), (uint32_t)(0x0a00ae27), (uint32_t)(0x7d079eb1),
    (uint32_t)(0xf00f9344), (uint32_t)(0x8708a3d2), (uint32_t)(0x1e01f268), (uint32_t)(0x6906c2fe),
    (uint32_t)(0xf762575d), (uint32_t)(0x806567cb), (uint32_t)(0x196c3671), (uint32_t)(0x6e6b06e7),
    (uint32_t)(0xfed41b76), (uint32_t)(0x89d32be0), (uint32_t)(0x10da7a5a), (uint32_t)(0x67dd4acc),
    (uint32_t)(0xf9b9df6f), (uint32_t)(0x8ebeeff9), (uint32_t)(0x17b7be43), (uint32_t)(0x60b08ed5),
    (uint32_t)(0xd6d6a3e8), (uint32_t)(0xa1d1937e), (uint32_t)(0x38d8c2c4), (uint32_t)(0x4fdff252),
    (uint32_t)(0xd1bb67f1), (uint32_t)(0xa6bc5767), (uint32_t)(0x3fb506dd), (uint32_t)(0x48b2364b),
    (uint32_t)(0xd80d2bda), (uint32_t)(0xaf0a1b4c), (uint32_t)(0x36034af6), (uint32_t)(0x41047a60),
    (uint32_t)(0xdf60efc3), (uint32_t)(0xa867df55), (uint32_t)(0x316e8eef), (uint32_t)(0x4669be79),
    (uint32_t)(0xcb61b38c), (uint32_t)(0xbc66831a), (uint32_t)(0x256fd2a0), (uint32_t)(0x5268e236),
    (uint32_t)(0xcc0c7795), (uint32_t)(0xbb0b4703), (uint32_t)(0x220216b9), (uint32_t)(0x5505262f),
    (uint32_t)(0xc5ba3bbe), (uint32_t)(0xb2bd0b28), (uint32_t)(0x2bb45a92), (uint32_t)(0x5cb36a04),
    (uint32_t)(0xc2d7ffa7), (uint32_t)(0xb5d0cf31), (uint32_t)(0x2cd99e8b), (uint32_t)(0x5bdeae1d),
    (uint32_t)(0x9b64c2b0), (uint32_t)(0xec63f226), (uint32_t)(0x756aa39c), (uint32_t)(0x026d930a),
    (uint32_t)(0x9c0906a9), (uint32_t)(0xeb0e363f), (uint32_t)(0x72076785), (uint32_t)(0x05005713),
    (uint32_t)(0x95bf4a82), (uint32_t)(0xe2b87a14), (uint32_t)(0x7bb12bae), (uint32_t)(0x0cb61b38),
    (uint32_t)(0x92d28e9b), (uint32_t)(0xe5d5be0d), (uint32_t)(0x7cdcefb7), (uint32_t)(0x0bdbdf21),
    (uint32_t)(0x86d3d2d4), (uint32_t)(0xf1d4e242), (uint32_t)(0x68ddb3f8), (uint32_t)(0x1fda836e),
    (uint32_t)(0x81be16cd), (uint32_t)(0xf6b9265b), (uint32_t)(0x6fb077e1), (uint32_t)(0x18b74777),
    (uint32_t)(0x88085ae6), (uint32_t)(0xff0f6a70), (uint32_t)(0x66063bca), (uint32_t)(0x11010b5c),
    (uint32_t)(0x8f659eff), (uint32_t)(0xf862ae69), (uint32_t)(0x616bffd3), (uint32_t)(0x166ccf45),
    (uint32_t)(0xa00ae278), (uint32_t)(0xd70dd2ee), (uint32_t)(0x4e048354), (uint32_t)(0x3903b3c2),
    (uint32_t)(0xa7672661), (uint32_t)(0xd06016f7), (uint32_t)(0x4969474d), (uint32_t)(0x3e6e77db),
    (uint32_t)(0xaed16a4a), (uint32_t)(0xd9d65adc), (uint32_t)(0x40df0b66), (uint32_t)(0x37d83bf0),
    (uint32_t)(0xa9bcae53), (uint32_t)(0xdebb9ec5), (uint32_t)(0x47b2cf7f), (uint32_t)(0x30b5ffe9),
    (uint32_t)(0xbdbdf21c), (uint32_t)(0xcabac28a), (uint32_t)(0x53b39330), (uint32_t)(0x24b4a3a6),
    (uint32_t)(0xbad03605), (uint32_t)(0xcdd70693), (uint32_t)(0x54de5729), (uint32_t)(0x23d967bf),
    (uint32_t)(0xb3667a2e), (uint32_t)(0xc4614ab8), (uint32_t)(0x5d681b02), (uint32_t)(0x2a6f2b94),
    (uint32_t)(0xb40bbe37), (uint32_t)(0xc30c8ea1), (uint32_t)(0x5a05df1b), (uint32_t)(0x2d02ef8d)
};



#ifdef __cplusplus
} // end namespace
#endif


