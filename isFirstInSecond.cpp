#include "middle_str.h"

bool itc_isFirstInSecond(std::string s1, std::string s2)
{
	int a = 0;
	int result = 1;
	for(int i = 0; i < len(s2); i++)
	{
		if(s2[i] == s1[0])
		{
			for(int j = i; j < len(s1) + i; j++)
			{
				if (s2[j] == s1[j - i])
					result++;
			}
			if (result == len(s1))
				return true;
		}
	}
	return false;
}
