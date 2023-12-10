#include "middle_str.h"

bool itc_ñompare(std::string s1, std::string s2)
{
	if(len(s1) == len(s2))
	{
		for(int i = 0; i < len(s1); i++)
		{
			if (s1[i] != s2[i])
				return false;
		}
		return true;
	}
	return false;
}