#include "middle_str.h"

std::string itc_Cezar(std::string str, int k) 
{
    for (int i = 0; i < len(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = (str[i] - 'a' + k) % 26 + 'a';

            if (str[i] < 'a')
                str[i] += 26;
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = (str[i] - 'A' + k) % 26 + 'A';

            if (str[i] < 'A')
                str[i] += 26;
        }
    }
    return str;
}
