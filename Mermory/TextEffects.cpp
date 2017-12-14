#include <iostream>
#include "TextEffects.h"

void TextEffects::SpamTextColors(const unsigned int spamCount) {
    for (unsigned int i = 0; i < spamCount; i++) {
        NewTextAndBackgroundColors("Color 1A");
        NewTextAndBackgroundColors("Color 2B");
        NewTextAndBackgroundColors("Color 3C");
        NewTextAndBackgroundColors("Color 4D");
        NewTextAndBackgroundColors("Color 5E");
        NewTextAndBackgroundColors("Color A1");
        NewTextAndBackgroundColors("Color B2");
        NewTextAndBackgroundColors("Color C3");
        NewTextAndBackgroundColors("Color D4");
        NewTextAndBackgroundColors("Color E5");
        NewTextAndBackgroundColors("Color F6");
    }
}

void TextEffects::NewTextAndBackgroundColors(const char* colors) {
    sleepMs(1);
    system(colors);
}

void TextEffects::DisplayWordByWord(const std::vector<std::string> &words) {
    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
    std::cout << std::endl << std::endl;

    for (std::string word : words) {
        std::cout << word << ' ';
        std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::microseconds(400000));
    }

    std::cout << std::endl << std::endl << std::endl;
}