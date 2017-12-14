#pragma once
#include <string>
#include <vector>
#include "TimeUtilities.h"

class TextEffects {
public:
    static void SpamTextColors(const unsigned int spamCount);
    static void NewTextAndBackgroundColors(const char* colors);
    static void DisplayWordByWord(const std::vector<std::string> &words);
};