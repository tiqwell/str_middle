#include "middle_str.h"

bool itc_isFirstInSecond(std::string s1, std::string s2)
{
    for (long long i = 0; i <= len(s2) - len(s1); i++)
    {
        int result = 0;
        for (long long j = 0; j < len(s1); j++)
        {
            if (s2[i + j] == s1[j])
                result++;
        }
        if (result == len(s1))
            return true;
    }
    return false;
}
