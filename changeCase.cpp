#include "middle_str.h"

unsigned char itc_changeCase(unsigned char c)
{
	if (c >= 'A' && c <= 'Z')
		return c += 32;
	if (c >= 'a' && c <= 'z')
		return c -= 32;
	return c;
}