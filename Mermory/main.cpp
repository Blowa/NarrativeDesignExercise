#include "main.h"
#include <iostream>
#include <conio.h>
//#include "MainMenu.h"
#include "TextEffects.h"

void main() {
	start();
	hackNasa();
    _getch();
}

void start() {
    std::vector<std::string> words = { "Welcome", "to", "St", "Tropey" };
    TextEffects::DisplayWordByWord(words);

    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
	//mainMenu();
}

void hackNasa() {
	std::cout << "\nVoulez-vous hack la NASA ? \n\n";
	std::cin >> rep;
	std::cout << "\nBravo, vous avez Hack la NASA !\n\n";
}