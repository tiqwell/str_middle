#include "middle_str.h"

bool IsLetter(char i)
{
    if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z') || (i >= 'à' && i <= 'ÿ') || (i >= 'À' && i <= 'ß'))
        return true;
    return false;
}
bool IsSpaceOrEndl(char i)
{
    if (i == ' ' || i == '\0')
        return true;
    return false;
}
int itc_countWords(std::string str)
{
    setlocale(LC_ALL, "Russian");
    int result = 0;
    bool inWord = false;
    bool inListOfLetters = false;
    for (int i = 0; i <= len(str); i++)
    {
        if(IsLetter(str[i]))
            inWord = true;
        if(inWord && IsSpaceOrEndl(str[i]))
        {
            result++;
            inWord = false;
        }
        if(inWord && !IsLetter(str[i]) && !IsSpaceOrEndl(str[i]))
        {
            while (str[i] != ' ' && i < len(str))
                i++;
            inWord = false;
        }
    }
    return result;
}