#include "str_middle.h"

std::string itc_Cezar(std::string str, int k) 
{
	for(int i = 0; i < len(str); i++)
	{
		str[i] += k;
		if (str[i] > 'z')
			str[i] -= 'z' - 'a' + 1;
		if (str[i] < 'a')
			str[i] += 'z' - 'a' + 1;
	}
	return str;
}