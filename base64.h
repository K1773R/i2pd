#ifndef BASE64_H
#define BASE64_H

#include <inttypes.h>
#include <string.h>

namespace i2p
{
namespace data
{

    
    /*
     * Base64 encodes an array of bytes.
     * @return the number of characters in the output buffer
     * @param InBuffer array of input bytes to be encoded 
     * @param InCount length of the input array
     * @param OutBuffer array of output characters 
     * @param len length of the output buffer
     */
    size_t ByteStreamToBase64 (const uint8_t * InBuffer, size_t InCount, char * OutBuffer, size_t len);

    /**
     * Decodes base 64 encoded data to an array of bytes.
     * @return the number of bytes in the output buffer
     * @param InBuffer array of input characters to be decoded
     * @param InCount length of the input array
     * @param OutBuffer array of output bytes
     * @param len length of the output buffer
     * @todo Do not return a negative value on failure, size_t could be unsigned.
     */
    size_t Base64ToByteStream (const char * InBuffer, size_t InCount, uint8_t * OutBuffer, size_t len );
    const char * GetBase64SubstitutionTable (); 
    
    size_t Base32ToByteStream (const char * inBuf, size_t len, uint8_t * outBuf, size_t outLen);
    size_t ByteStreamToBase32 (const uint8_t * InBuf, size_t len, char * outBuf, size_t outLen);
}
}

#endif

