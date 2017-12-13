#include "main.h"
void sleepMs(int time){
	sleep_until(system_clock::now() + microseconds(time));
}
void main() {
	//cout << "Hello World !" ;
	//start();
	hackNasa();
	_getch();
}
void start() {
	sleep_until(system_clock::now() + seconds(1));
	cout << endl << endl;
	cout << "Welcome"; 
	sleep_until(system_clock::now() + microseconds(400000));
		cout << " to";
		sleep_until(system_clock::now() + microseconds(400000));
		cout << " My "; 
		sleep_until(system_clock::now() + microseconds(400000));
		cout << "Memories ";
		cout << endl << endl << endl;
		
	sleep_until(system_clock::now() + seconds(1));
	mainMenu();
}
void mainMenu() {
	cout << "Play - (P) \n";
	cout << "Option - (O) \n" ;
	cout << "Quit - (Q) \n" ;
	cout << endl << endl << endl;

	Menu status = menuChoise();
	switch (status)
	{
	case Menu::Play:
		play();
		break;
	case Menu::Option:
		break;
	case Menu::Quit:
		crash();
		break;
	case Menu::None:
		break;
	default:
		break;
	}
}
Menu menuChoise() {
	getline(cin, rep);
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
void play(){
	crash();
}
void crash() 
{
	while (1) {
		sleepMs(1);
		system("Color 1A");
		sleepMs(1);
		system("Color 2B");
		sleepMs(1);
		system("Color 3C");
		sleepMs(1);
		system("Color 4D");
		sleepMs(1);
		system("Color 5E");
		sleepMs(1);
		system("Color 6F");
		sleepMs(1);
		system("Color A1");
		sleepMs(1);
		system("Color B2");
		sleepMs(1);
		system("Color C3");
		sleepMs(1);
		system("Color D4");
		sleepMs(1);
		system("Color E5");
		sleepMs(1);
		system("Color F6");
		sleepMs(1);
	}
}
void hackNasa() {
	cout << "\nVoulez-vous hack la NASA ? \n\n";
	cin >> rep;
	cout << "\nBravo, vous avez Hack la NASA !\n\n";
}