#include "str_middle.h"

std::string itc_rmFreeSpace(std::string str)
{
	std::string result;
	for (int i = 0; i < len(str); i++)
	{
		if (str[i] != ' ')
			result += str[i];
		else
		{
			result += ' ';
			while (str[i + 1] == ' ')
				i++;
		}
	}
	return result;
}