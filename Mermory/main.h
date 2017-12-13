#pragma once

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <conio.h>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

string rep;

void start();
void mainMenu();
void play();
void sleepMs(int time);
void crash();
void hackNasa();
enum  Menu {
	Play,
	Option,
	Quit,
	None
};
Menu menuChoise();

