#include "middle_str.h"

bool IsSpace(char i)
{
    if (i == ' ')
        return true;
    return false;
}

std::string itc_maxCharWord(std::string str)
{
    setlocale(LC_ALL, "Russian");
    std::string result = "";
    std::string currentWord;
    long long currentLen = 0;
    bool inWord = false;
    bool inListOfLetters = false;
    for (int i = 0; i <= len(str); i++)
    {
        if (IsLetter(str[i]))
        {
            inWord = true;
            currentLen++;
            currentWord += str[i];
        }
        if (inWord && IsSpaceOrEndl(str[i]))
        {
            if(len(currentWord) > len(result))
                result = currentWord;
            currentWord = "";
            currentLen = 0;
            inWord = false;
        }
        if (inWord && !IsLetter(str[i]) && !IsSpaceOrEndl(str[i]))
        {
            while (str[i] != ' ' && i < len(str))
                i++;
            inWord = false;
        }
    }
    if (result == "")
        return "error";
    return result;
}