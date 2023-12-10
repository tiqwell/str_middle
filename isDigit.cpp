#include "middle_str.h"

bool itc_isDigit(unsigned char c)
{
	if (c - '0' >= 0 && c - '0' <= 9)
		return true;
	return false;
}