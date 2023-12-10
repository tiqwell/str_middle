#include "middle_str.h"

long long len(std::string str)
{
	int a = 0;
	for (int i = 0; str[i] != '\0'; i++)
		a++;
	return a;
}