#ifndef BIT_BYTE_UTIL_BIT_CONVERTER_H_
#define BIT_BYTE_UTIL_BIT_CONVERTER_H_

#include <iostream>
#include <vector>
#include <memory>
#include <bitset>

namespace BBUtil {

// Platform-Independent DataTypes
// 
//

// Endianness of the system.
static bool isLittleEndian = true; // temporary


bool IsLittleEndian();

// BitArray (std::vector<unsigned int>)
// This functions copies the source byte array to new byte array, 
// from the sourceIndex by amount of copyCount;
std::vector<unsigned char> BitArrayCopy(
    std::vector<unsigned char>& source, int sourceIndex, int copyCount);


//bool BytesToBoolean(std::vector<unsigned char>& input, int startOffset);
//double BytesToDouble(std::vector<unsigned char>& input, int startOffset);

// These functions gets several data types as an input and returns byte array.
std::vector<unsigned char> GetBytes(bool value);
std::vector<unsigned char> GetBytes(short value);
std::vector<unsigned char> GetBytes(unsigned short value);
std::vector<unsigned char> GetBytes(int value);
std::vector<unsigned char> GetBytes(unsigned int value);
std::vector<unsigned char> GetBytes(long long value);
std::vector<unsigned char> GetBytes(unsigned long long value);
// These functions gets byte array with its startOffset(first index) as an input, 
// and returns several datatypes. 
short BytesToInt16(std::vector<unsigned char>& input, int startOffset);
unsigned short BytesToUInt16(std::vector<unsigned char>& input, int startOffset);
int BytesToInt32(std::vector<unsigned char>& input, int startOffset);
unsigned int BytesToUInt32(std::vector<unsigned char>& input, int startOffset);
long long BytesToInt64(std::vector<unsigned char>& input, int startOffset);
unsigned long long BytesToUInt64(std::vector<unsigned char>& input, int startOffset);


} // namespace BBUtil 
#endif // BIT_BYTE_UTIL_BIT_CONVERTER_H_
