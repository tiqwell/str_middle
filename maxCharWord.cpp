#include "middle_str.h"

std::string max(std::string str1, std::string str2)
{
	if (str2 > str1)
		return str2;
	return str1;
}

std::string itc_maxCharWord(std::string str)
{
	std::string result = " ";
	std::string maxWord;
	std::string currentWord;
	bool inWord = false;
	long long lenOfCurrenWord = 0;
	for(int i = 0; i <= len(str); i++)
	{
		if (IsLetter(str[i]))
		{
			inWord = true;
			lenOfCurrenWord++;
		}
		if(inWord && IsSpaceOrEndl(str[i]))
		{
			maxWord = max(maxWord, currentWord)
		}
	}
}