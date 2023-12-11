#pragma once

#include <iostream>
#include <string>

bool itc_isDigit(unsigned char c); 
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(std::string s1, std::string s2);
int itc_countWords(std::string str);
long long len(std::string str);
std::string itc_maxCharWord(std::string str);
bool IsLetter(char i);
bool IsSpaceOrEndl(char i);
char itc_sameChar(std::string str);
bool itc_isFirstInSecond(std::string s1, std::string s2);
