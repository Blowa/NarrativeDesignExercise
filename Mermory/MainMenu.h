#pragma once
#include <iostream>
#include <string>

std::string rep;

enum Menu {
    Play,
    Option,
    Quit,
    None
};
Menu MenuChoices();

void play();
void quit();
void mainMenu();