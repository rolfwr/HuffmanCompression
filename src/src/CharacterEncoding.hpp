#pragma once

#define START_SIZE 2

#include <stdlib.h>

/*
================================
Represents the encoding of a character
================================
 */
class CharacterEncoding
{
public:
	CharacterEncoding();
	CharacterEncoding( CharacterEncoding const& original );
	~CharacterEncoding();

	unsigned char GetBit( size_t index ) const;
	size_t        GetBitSize();
	void          AddBit( unsigned char bit );
	void          RemoveBit();

private:
	char*     bytes;
	size_t    index;
	size_t    numBytes;
	size_t    bitSize;
};

