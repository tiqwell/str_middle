#include "middle_str.h"

unsigned char itc_toUpper(unsigned char c)
{
	if (c >= 'A' && c <= 'Z')
		return c;
	if (c >= 'a' && c <= 'z')
		return c -= 32;
	return c;
}