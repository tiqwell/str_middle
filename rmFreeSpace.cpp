#include "middle_str.h"

std::string itc_rmFreeSpace(std::string str)
{
	std::string result;
	int a = 0;
	for(int i = 0; str[i] == ' '; i++)
		a++;
	for (int i = a; i < len(str); i++)
	{
		if (str[i] != ' ')
			result += str[i];
		else
		{
			while (str[i + 1] == ' ') 
				i++;
			result += ' ';
		}
	}
	result.pop_back();
	return result;
}
