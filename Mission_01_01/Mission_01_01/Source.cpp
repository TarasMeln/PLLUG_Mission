#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define MAX 3
int main() {
	system("chcp 1251");
Repeat2:
	cout << "\t\t\t\t\t\tInstruction:" ;
	cout << "\nTo successfully complete the game, you need to select one of three items:";
	cout << "\n 0-Paper";
	cout << "\n 1-Scissors";
	cout << "\n 2-Well";
	cout << "\n\t\t\t\t\t\tEnter code of the subject:";

	int inputUserNumber;

Repeat:
	cin >> inputUserNumber;
	// If the variant of the entered code of the subject was incorrect:
	if (inputUserNumber > 3 || inputUserNumber < 0) {
		int choise;
		cout << "\nCode of the subject  is incorrect. (Repeat attempt? 0-Yes; 1-No) :";
		cin >> choise;
		if (choise == 0) {
			cout << "\n\t\t\t\t\t\tEnter code of the subject:";
			goto Repeat;
		}
		else {
			cout << "\t\t\t\t\t\tYou don't need me since begin";
		}

	}

	// Коли код предмету був вірний:

	int inputBotNumber; // код предмету введений комп'ютером
	srand(time(NULL));
	inputBotNumber = 0 + rand() % 3;// Генератор рандомних числе від 0 до 3
	int choiseInGame;
	if (inputUserNumber == 0 && inputBotNumber == 0) {
		cout << "\n\t\t\t\t\t\tDraw";
		cout << "\n\n\t\t\t\t\t\tRepeat my super game??(0-Yes; 1-No)";
		cin >> choiseInGame;
		if (choiseInGame == 0) {
			system("cls");
			goto Repeat2;
		}
		else {
			cout << "\n\n\t\t\t\t\t\tWhoever does not play does not win";
		}
	}
	if (inputUserNumber == 0 && inputBotNumber == 1) {
		cout << "\n\t\t\t\t\t\tYou lose(Perhaps the computer chose the scissors)";
		cout << "\n\n\t\t\t\t\t\tRepeat my super game??(0-Yes; 1-No)";
		cin >> choiseInGame;
		if (choiseInGame == 0) {
			system("cls");
			goto Repeat2;
		}
		else {
			cout << "\n\t\t\t\t\t\tWhoever does not play does not win";
		}
	}
	if (inputUserNumber == 0 && inputBotNumber == 2) {
		cout << "\n\t\t\t\t\t\tYou win!(Perhaps the computer chose the well)";
		cout << "\n\n\t\t\t\t\t\tRepeat my super game??(0-Yes; 1-No)";
		cin >> choiseInGame;
		if (choiseInGame == 0) {
			system("cls");
			goto Repeat2;
		}
		else {
			cout << "\n\t\t\t\t\t\tWhoever does not play does not win" ;
		}
	}
	if (inputUserNumber == 1 && inputBotNumber == 0) {
		cout << "\n\t\t\t\t\t\tYou win!(Perhaps the computer chose the paper)";
		cout << "\n\n\t\t\t\t\t\tRepeat my super game??(0-Yes; 1-No)";
		cin >> choiseInGame;
		if (choiseInGame == 0) {
			system("cls");
			goto Repeat2;
		}
		else {
			cout << "\n\t\t\t\t\t\tWhoever does not play does not win";
		}
	}
	if (inputUserNumber == 1 && inputBotNumber == 1) {
		cout << "\n\t\t\t\t\t\tDraw";
		cout << "\n\n\t\t\t\t\t\tRepeat my super game??(0-Yes; 1-No)";
		cin >> choiseInGame;
		if (choiseInGame == 0) {
			system("cls");
			goto Repeat2;
		}
		else {
			cout << "\n\t\t\t\t\t\tWhoever does not play does not win";
		}
	}
	if (inputUserNumber == 1 && inputBotNumber == 2) {
		cout << "\n\t\t\t\t\t\tYou lose(Perhaps the computer chose the well)";
		cout << "\n\n\t\t\t\t\t\tRepeat my super game??(0-Yes; 1-No)";
		cin >> choiseInGame;
		if (choiseInGame == 0) {
			system("cls");
			goto Repeat2;
		}
		else {
			cout << "\n\t\t\t\t\t\tWhoever does not play does not win";
		}
	}
	if (inputUserNumber == 2 && inputBotNumber == 0) {
		cout << "\n\t\t\t\t\t\tYou lose(Perhaps the computer chose the paper)";
		cout << "\n\n\t\t\t\t\t\tRepeat my super game??(0-Yes; 1-No)";
		cin >> choiseInGame;
		if (choiseInGame == 0) {
			system("cls");
			goto Repeat2;
		}
		else {
			cout << "\n\t\t\t\t\t\tWhoever does not play does not win";
		}
	}
	if (inputUserNumber == 2 && inputBotNumber == 1) {
		cout << "\n\t\t\t\t\t\tYou win!(Perhaps the computer chose the scissors )";
		cout << "\n\n\t\t\t\t\t\tRepeat my super game??(0-Yes; 1-No)";
		cin >> choiseInGame;
		if (choiseInGame == 0) {
			system("cls");
			goto Repeat2;
		}
		else {
			cout << "\n\t\t\t\t\t\tWhoever does not play does not win";
		}
	}
	if (inputUserNumber == 2 && inputBotNumber == 2) {
		cout << "\n\t\t\t\t\t\tDraw";
		cout << "\n\n\t\t\t\t\t\tRepeat my super game??(0-Yes; 1-No)";
		cin >> choiseInGame;
		if (choiseInGame == 0) {
			system("cls");
			goto Repeat2;
		}
		else {
			cout << "\n\t\t\t\t\t\tWhoever does not play does not win";
		}
	}





	puts("");
	system("pause");
}