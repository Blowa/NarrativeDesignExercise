#include "MainMenu.h"
#include "TextEffects.h"

Menu MenuChoices() {
    std::getline(std::cin, rep);
    if (rep == "P" || rep == "p") {
        return Menu::Play;
    }
    else if (rep == "O" || rep == "o") {
        return Menu::Option;
    }
    else if (rep == "Q" || rep == "q") {
        return Menu::Quit;
    }
    else {
        return Menu::None;
    }
}

void mainMenu() {
    std::cout << "Play - (P) \n";
    std::cout << "Option - (O) \n";
    std::cout << "Quit - (Q) \n";
    std::cout << std::endl << std::endl << std::endl;

    Menu choice = MenuChoices();
    switch (choice) {
    case Menu::Play:
        play();
        break;
    case Menu::Option:
        break;
    case Menu::Quit:
        quit();
        break;

    case Menu::None:
    default:
        break;
    }
}

void play() {
    TextEffects::SpamTextColors(10);
}

void quit() {
    TextEffects::SpamTextColors(10);
}