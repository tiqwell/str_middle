#include "str_middle.h"

char itc_sameChar(std::string str)
{
	int result = 0;
	for(int i = 0; i < len(str); i++)
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			for(int j = 0; j < len(str); j++)
			{
				if (str[i] == str[j])
					result++;
			}
			if (result == 2)
				return str[i];
		}
	}
	return 0;
}