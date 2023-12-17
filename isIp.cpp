#include "middle_str.h"

bool numIsOk(std::string str)
{
	if (len(str) > 3)
		return false;
	else if(len(str) == 3)
	{
		if (str[0] <= '1')
			return true;
		if (str[0] == '2' && str[1] <= '5' && str[2] <= '5')
			return true;
		return false;
	}
	return true;
}

bool itc_isIp(std::string str)
{
	std::string num;
	int countOfDots = 0;
	for(int i = 0; i < len(str); i++)
	{
		if (str[i] == '.')
			countOfDots++;
		else if (str[i] >= '0' && str[i] <= '9');
		else return false;
	}
	if (countOfDots != 3 || len(str) > 15 || len(str) < 7) 
		return false;
	for (int i = 0; i <= len(str); i++)
	{
		if (str[i] != '.' && str[i] != '\0')
			num += str[i];
		else
		{
			if (!numIsOk(num))
				return false;
			else
				num = "";
		}
	}
	return true;
}