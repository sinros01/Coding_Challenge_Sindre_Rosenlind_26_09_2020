#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <algorithm>
#include <ctime>
#include <cstdlib>
bool playagain = true;
int again = 0;
int main() {
	do {
		int gamemode = 0;
		std::string word = "";
		char guess;
		int length = 0;
		int counter = 0;
		char one = '_';
		char two = '_';
		char three = '_';
		char four = '_';
		char five = '_';
		char six = '_';
		char seven = '_';
		char eight = '_';
		char nine = '_';
		std::string fa = "         ";
		char fb = ' ';
		char e = ' ';
		char n = ' ';
		std::string m = "   ";
		char b = ' ';
		char ba = ' ';
		std::string ha = "       ";
		std::string hb = "       ";
		std::string la = "  ";
		std::string ld = "  ";
		char lc = ' ';
		char lb = ' ';
		char le = ' ';
		char lf = ' ';
		int hangman[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		int k = 1;
		std::cout << "---------- Welcome to Hangman! ----------" << std::endl;
		std::cout << std::endl;
		std::cout << "Would you like to enter a word by your self or get a generated word?" << std::endl;
		std::cout << "For enter a word by youself type:  1" << std::endl;
		std::cout << "For a generated word type:  2" << std::endl;
		std::cin >> gamemode;
		if (gamemode == 1) {
			std::cout << "Enter a word (maximum 9 characters):";
			std::cin >> word;
			for (int i = 0; i < 100; i++) {
				std::cout << "Hiding word" << std::endl;
			}
			std::cout << "Amount of characters:";
			for (int j = 0; j < word.size(); j++) {
				std::cout << "_";
			}
			std::cout << std::endl;
			length = word.size();
			do {
				std::cout << "Enter a character:";
				std::cin >> guess;
				if (length == 1) {
					if (guess == word[0]) {
						one = guess;
						counter++;
					}
					if (guess != word[0]) {
						std::cout << "You guessed the wrong character, try again!" << std::endl;
						if (hangman[k] == 1) {
							fa = "XXXXXXXXX";
							fb = 'X';
						}
						if (hangman[k] == 2) {
							b = '|';
							ba = '-';
						}
						if (hangman[k] == 3) {
						    ha = "_______";
						}
						if (hangman[k] == 4) {
							hb = "_______";
						}
						if (hangman[k] == 5) {
							la = "--";
							lb = '|';
							le = '_';
						}
						if (hangman[k] == 6) {
							ld = "--";
							lc = '|';
							lf = '_';
						}
						if (hangman[k] == 7) {
							e = '.';
						}
						if (hangman[k] == 8) {
							n = '|';
						}
						if (hangman[k] == 9) {
							m = "___";
							std::cout << "You have lost the game!";
							counter = 10;
						}
						k++;
					}
					std::cout << one << std::endl;
				}
				if (length == 2) {
					if (guess == word[0]) {
						one = guess;
						counter++;
					}
					if (guess == word[1]) {
						two = guess;
						counter++;
					}
					if (guess != word[1] && guess != word[0]){
						std::cout << "You guessed the wrong character, try again!" << std::endl;
						if (hangman[k] == 1) {
							fa = "XXXXXXXXX";
							fb = 'X';
						}
						if (hangman[k] == 2) {
							b = '|';
							ba = '-';
						}
						if (hangman[k] == 3) {
							ha = "_______";
						}
						if (hangman[k] == 4) {
							hb = "_______";
						}
						if (hangman[k] == 5) {
							la = "--";
							lb = '|';
							le = '_';
						}
						if (hangman[k] == 6) {
							ld = "--";
							lc = '|';
							lf = '_';
						}
						if (hangman[k] == 7) {
							e = '.';
						}
						if (hangman[k] == 8) {
							n = '|';
						}
						if (hangman[k] == 9) {
							m = "___";
							std::cout << "You have lost the game!";
							counter = 10;
						}
						k++;
					}
					std::cout << one << two << std::endl;
				}
				if (length == 3) {
					if (guess == word[0]) {
						one = guess;
						counter++;
					}
					if (guess == word[1]) {
						two = guess;
						counter++;
					}
					if (guess == word[2]) {
						three = guess;
						counter++;
					}
					if (guess != word[2] && guess != word[1] && guess != word[0]) {
						std::cout << "You guessed the wrong character, try again!" << std::endl;
						if (hangman[k] == 1) {
							fa = "XXXXXXXXX";
							fb = 'X';
						}
						if (hangman[k] == 2) {
							b = '|';
							ba = '-';
						}
						if (hangman[k] == 3) {
							ha = "_______";
						}
						if (hangman[k] == 4) {
							hb = "_______";
						}
						if (hangman[k] == 5) {
							la = "--";
							lb = '|';
							le = '_';
						}
						if (hangman[k] == 6) {
							ld = "--";
							lc = '|';
							lf = '_';
						}
						if (hangman[k] == 7) {
							e = '.';
						}
						if (hangman[k] == 8) {
							n = '|';
						}
						if (hangman[k] == 9) {
							m = "___";
							std::cout << "You have lost the game!";
							counter = 10;
						}
						k++;
					}
					std::cout << one << two << three << std::endl;
				}
				if (length== 4) {
					if (guess == word[0]) {
						one = guess;
						counter++;
					}
					if (guess == word[1]) {
						two = guess;
						counter++;
					}
					if (guess == word[2]) {
						three = guess;
						counter++;
					}
					if (guess == word[3]) {
						four = guess;
						counter++;
					}
					if (guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
						std::cout << "You guessed the wrong character, try again!" << std::endl;
						if (hangman[k] == 1) {
							fa = "XXXXXXXXX";
							fb = 'X';
						}
						if (hangman[k] == 2) {
							b = '|';
							ba = '-';
						}
						if (hangman[k] == 3) {
							ha = "_______";
						}
						if (hangman[k] == 4) {
							hb = "_______";
						}
						if (hangman[k] == 5) {
							la = "--";
							lb = '|';
							le = '_';
						}
						if (hangman[k] == 6) {
							ld = "--";
							lc = '|';
							lf = '_';
						}
						if (hangman[k] == 7) {
							e = '.';
						}
						if (hangman[k] == 8) {
							n = '|';
						}
						if (hangman[k] == 9) {
							m = "___";
							std::cout << "You have lost the game!";
							counter = 10;
						}
						k++;
					}
					std::cout << one << two << three << four << std::endl;
				}
				if (length == 5) {
					if (guess == word[0]) {
						one = guess;
						counter++;
					}
					if (guess == word[1]) {
						two = guess;
						counter++;
					}
					if (guess == word[2]) {
						three = guess;
						counter++;
					}
					if (guess == word[3]) {
						four = guess;
						counter++;
					}
					if (guess == word[4]) {
						five = guess;
						counter++;
					}
					if (guess != word[4] && guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
						std::cout << "You guessed the wrong character, try again!" << std::endl;
						if (hangman[k] == 1) {
							fa = "XXXXXXXXX";
							fb = 'X';
						}
						if (hangman[k] == 2) {
							b = '|';
							ba = '-';
						}
						if (hangman[k] == 3) {
							ha = "_______";
						}
						if (hangman[k] == 4) {
							hb = "_______";
						}
						if (hangman[k] == 5) {
							la = "--";
							lb = '|';
							le = '_';
						}
						if (hangman[k] == 6) {
							ld = "--";
							lc = '|';
							lf = '_';
						}
						if (hangman[k] == 7) {
							e = '.';
						}
						if (hangman[k] == 8) {
							n = '|';
						}
						if (hangman[k] == 9) {
							m = "___";
							std::cout << "You have lost the game!";
							counter = 10;
						}
						k++;
					}
					std::cout << one << two << three << four << five << std::endl;
				}
				if (length == 6) {
					if (guess == word[0]) {
						one = guess;
						counter++;
					}
					if (guess == word[1]) {
						two = guess;
						counter++;
					}
					if (guess == word[2]) {
						three = guess;
						counter++;
					}
					if (guess == word[3]) {
						four = guess;
						counter++;
					}
					if (guess == word[4]) {
						five = guess;
						counter++;
					}
					if (guess == word[5]) {
						six = guess;
						counter++;
					}
					if (guess != word[5] && guess != word[4] && guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
						std::cout << "You guessed the wrong character, try again!" << std::endl;
						if (hangman[k] == 1) {
							fa = "XXXXXXXXX";
							fb = 'X';
						}
						if (hangman[k] == 2) {
							b = '|';
							ba = '-';
						}
						if (hangman[k] == 3) {
							ha = "_______";
						}
						if (hangman[k] == 4) {
							hb = "_______";
						}
						if (hangman[k] == 5) {
							la = "--";
							lb = '|';
							le = '_';
						}
						if (hangman[k] == 6) {
							ld = "--";
							lc = '|';
							lf = '_';
						}
						if (hangman[k] == 7) {
							e = '.';
						}
						if (hangman[k] == 8) {
							n = '|';
						}
						if (hangman[k] == 9) {
							m = "___";
							std::cout << "You have lost the game!";
							counter = 10;
						}
						k++;
					}
					std::cout << one << two << three << four << five << six << std::endl;
				}
				if (length == 7) {
					if (guess == word[0]) {
						one = guess;
						counter++;
					}
					if (guess == word[1]) {
						two = guess;
						counter++;
					}
					if (guess == word[2]) {
						three = guess;
						counter++;
					}
					if (guess == word[3]) {
						four = guess;
						counter++;
					}
					if (guess == word[4]) {
						five = guess;
						counter++;
					}
					if (guess == word[5]) {
						six = guess;
						counter++;
					}
					if (guess == word[6]) {
						seven = guess;
						counter++;
					}
					if (guess != word[6] && guess != word[5] && guess != word[4] && guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
						std::cout << "You guessed the wrong character, try again!" << std::endl;
						if (hangman[k] == 1) {
							fa = "XXXXXXXXX";
							fb = 'X';
						}
						if (hangman[k] == 2) {
							b = '|';
							ba = '-';
						}
						if (hangman[k] == 3) {
							ha = "_______";
						}
						if (hangman[k] == 4) {
							hb = "_______";
						}
						if (hangman[k] == 5) {
							la = "--";
							lb = '|';
							le = '_';
						}
						if (hangman[k] == 6) {
							ld = "--";
							lc = '|';
							lf = '_';
						}
						if (hangman[k] == 7) {
							e = '.';
						}
						if (hangman[k] == 8) {
							n = '|';
						}
						if (hangman[k] == 9) {
							m = "___";
							std::cout << "You have lost the game!";
							counter = 10;
						}
						k++;
					}
					std::cout << one << two << three << four << five << six << seven << std::endl;
				}
				if (length == 8) {
					if (guess == word[0]) {
						one = guess;
						counter++;
					}
					if (guess == word[1]) {
						two = guess;
						counter++;
					}
					if (guess == word[2]) {
						three = guess;
						counter++;
					}
					if (guess == word[3]) {
						four = guess;
						counter++;
					}
					if (guess == word[4]) {
						five = guess;
						counter++;
					}
					if (guess == word[5]) {
						six = guess;
						counter++;
					}
					if (guess == word[6]) {
						seven = guess;
						counter++;
					}
					if (guess == word[7]) {
						eight = guess;
						counter++;
					}
					if (guess != word[7] && guess != word[6] && guess != word[5] && guess != word[4] && guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
						std::cout << "You guessed the wrong character, try again!" << std::endl;
						if (hangman[k] == 1) {
							fa = "XXXXXXXXX";
							fb = 'X';
						}
						if (hangman[k] == 2) {
							b = '|';
							ba = '-';
						}
						if (hangman[k] == 3) {
							ha = "_______";
						}
						if (hangman[k] == 4) {
							hb = "_______";
						}
						if (hangman[k] == 5) {
							la = "--";
							lb = '|';
							le = '_';
						}
						if (hangman[k] == 6) {
							ld = "--";
							lc = '|';
							lf = '_';
						}
						if (hangman[k] == 7) {
							e = '.';
						}
						if (hangman[k] == 8) {
							n = '|';
						}
						if (hangman[k] == 9) {
							m = "___";
							std::cout << "You have lost the game!";
							counter = 10;
						}
						k++;
					}
					std::cout << one << two << three << four << five << six << seven << eight << std::endl;
				}
				if (length == 9) {
					if (guess == word[0]) {
						one = guess;
						counter++;
					}
					if (guess == word[1]) {
						two = guess;
						counter++;
					}
					if (guess == word[2]) {
						three = guess;
						counter++;
					}
					if (guess == word[3]) {
						four = guess;
						counter++;
					}
					if (guess == word[4]) {
						five = guess;
						counter++;
					}
					if (guess == word[5]) {
						six = guess;
						counter++;
					}
					if (guess == word[6]) {
						seven = guess;
						counter++;
					}
					if (guess == word[7]) {
						eight = guess;
						counter++;
					}
					if (guess == word[8]) {
						nine = guess;
						counter++;
					}
					if (guess != word[8] && guess != word[7] && guess != word[6] && guess != word[5] && guess != word[4] && guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
						std::cout << "You guessed the wrong character, try again!" << std::endl;
						if (hangman[k] == 1) {
							fa = "XXXXXXXXX";
							fb = 'X';
						}
						if (hangman[k] == 2) {
							b = '|';
							ba = '-';
						}
						if (hangman[k] == 3) {
							ha = "_______";
						}
						if (hangman[k] == 4) {
							hb = "_______";
						}
						if (hangman[k] == 5) {
							la = "--";
							lb = '|';
							le = '_';
						}
						if (hangman[k] == 6) {
							ld = "--";
							lc = '|';
							lf = '_';
						}
						if (hangman[k] == 7) {
							e = '.';
						}
						if (hangman[k] == 8) {
							n = '|';
						}
						if (hangman[k] == 9) {
							m = "___";
							std::cout << "You have lost the game!";
							counter = 10;
						}
						k++;
					}
					std::cout << one << two << three << four << five << six << seven << eight << nine << std::endl;
				}
				std::cout << "     __________________                " << std::endl;
				std::cout << "    |                  |               " << std::endl;
				std::cout << "    |              " << fa << "           " << std::endl;
				std::cout << "    |              " << fb << " " << e << "   " << e << " " << fb << "           " << std::endl;
				std::cout << "    |              " << fb << "   " << n << "   " << fb << "           " << std::endl;
				std::cout << "    |              " << fb << "  " << m << "  " << fb << "           " << std::endl;
				std::cout << "    |              " << fa << "           " << std::endl;
				std::cout << "    |                  " << b << "               " << std::endl;
				std::cout << "    |           " << ha << "" << b << "" << hb << "        " << std::endl;
				std::cout << "    |                  " << b << "               " << std::endl;
				std::cout << "    |                  " << b << "               " << std::endl;
				std::cout << "    |                " << la << "" << ba << "" << ld << "             " << std::endl;
				std::cout << "    |               " << lb << "     " << lc << "            " << std::endl;
				std::cout << "    |               " << lb << "     " << lc << "            " << std::endl;
				std::cout << "  _____            " << le << "       " << lf << "           " << std::endl;
			} while (counter < word.size());
		}
		else if (gamemode == 2) {
		std::string random[40] = { "india", "golf", "hotel", "rock", "stairs", "kilo", "elephant", "fish", "dog", "banana", "apple", "house", "gay", "penis", "clever", "yellow", "wall", "word", "laptop", "lapdance", "sofa", "bed", "electric", "random", "school", "hamar", "wifi", "camera", "phone", "dancing", "wood", "micro", "charge", "code", "whore", "weed", "fun", "rage", "home", "angry"};
		int rng;
		int max = 40;
		std::srand(time(0));
		rng = (std::rand() % max) + 1;
		word = random[rng];
		std::cout << "Amount of characters:";
		for (int j = 0; j < word.size(); j++) {
			std::cout << "_";
		}
		std::cout << std::endl;
		length = word.size();
		do {
			std::cout << "Enter a character:";
			std::cin >> guess;
			if (length == 1) {
				if (guess == word[0]) {
					one = guess;
					counter++;
				}
				if (guess != word[0]) {
					std::cout << "You guessed the wrong character, try again!" << std::endl;
					if (hangman[k] == 1) {
						fa = "XXXXXXXXX";
						fb = 'X';
					}
					if (hangman[k] == 2) {
						b = '|';
						ba = '-';
					}
					if (hangman[k] == 3) {
						ha = "_______";
					}
					if (hangman[k] == 4) {
						hb = "_______";
					}
					if (hangman[k] == 5) {
						la = "--";
						lb = '|';
						le = '_';
					}
					if (hangman[k] == 6) {
						ld = "--";
						lc = '|';
						lf = '_';
					}
					if (hangman[k] == 7) {
						e = '.';
					}
					if (hangman[k] == 8) {
						n = '|';
					}
					if (hangman[k] == 9) {
						m = "___";
						std::cout << "You have lost the game!";
						counter = 10;
					}
					k++;
				}
				std::cout << one << std::endl;
			}
			if (length == 2) {
				if (guess == word[0]) {
					one = guess;
					counter++;
				}
				if (guess == word[1]) {
					two = guess;
					counter++;
				}
				if (guess != word[1] && guess != word[0]) {
					std::cout << "You guessed the wrong character, try again!" << std::endl;
					if (hangman[k] == 1) {
						fa = "XXXXXXXXX";
						fb = 'X';
					}
					if (hangman[k] == 2) {
						b = '|';
						ba = '-';
					}
					if (hangman[k] == 3) {
						ha = "_______";
					}
					if (hangman[k] == 4) {
						hb = "_______";
					}
					if (hangman[k] == 5) {
						la = "--";
						lb = '|';
						le = '_';
					}
					if (hangman[k] == 6) {
						ld = "--";
						lc = '|';
						lf = '_';
					}
					if (hangman[k] == 7) {
						e = '.';
					}
					if (hangman[k] == 8) {
						n = '|';
					}
					if (hangman[k] == 9) {
						m = "___";
						std::cout << "You have lost the game!";
						counter = 10;
					}
					k++;
				}
				std::cout << one << two << std::endl;
			}
			if (length == 3) {
				if (guess == word[0]) {
					one = guess;
					counter++;
				}
				if (guess == word[1]) {
					two = guess;
					counter++;
				}
				if (guess == word[2]) {
					three = guess;
					counter++;
				}
				if (guess != word[2] && guess != word[1] && guess != word[0]) {
					std::cout << "You guessed the wrong character, try again!" << std::endl;
					if (hangman[k] == 1) {
						fa = "XXXXXXXXX";
						fb = 'X';
					}
					if (hangman[k] == 2) {
						b = '|';
						ba = '-';
					}
					if (hangman[k] == 3) {
						ha = "_______";
					}
					if (hangman[k] == 4) {
						hb = "_______";
					}
					if (hangman[k] == 5) {
						la = "--";
						lb = '|';
						le = '_';
					}
					if (hangman[k] == 6) {
						ld = "--";
						lc = '|';
						lf = '_';
					}
					if (hangman[k] == 7) {
						e = '.';
					}
					if (hangman[k] == 8) {
						n = '|';
					}
					if (hangman[k] == 9) {
						m = "___";
						std::cout << "You have lost the game!";
						counter = 10;
					}
					k++;
				}
				std::cout << one << two << three << std::endl;
			}
			if (length == 4) {
				if (guess == word[0]) {
					one = guess;
					counter++;
				}
				if (guess == word[1]) {
					two = guess;
					counter++;
				}
				if (guess == word[2]) {
					three = guess;
					counter++;
				}
				if (guess == word[3]) {
					four = guess;
					counter++;
				}
				if (guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
					std::cout << "You guessed the wrong character, try again!" << std::endl;
					if (hangman[k] == 1) {
						fa = "XXXXXXXXX";
						fb = 'X';
					}
					if (hangman[k] == 2) {
						b = '|';
						ba = '-';
					}
					if (hangman[k] == 3) {
						ha = "_______";
					}
					if (hangman[k] == 4) {
						hb = "_______";
					}
					if (hangman[k] == 5) {
						la = "--";
						lb = '|';
						le = '_';
					}
					if (hangman[k] == 6) {
						ld = "--";
						lc = '|';
						lf = '_';
					}
					if (hangman[k] == 7) {
						e = '.';
					}
					if (hangman[k] == 8) {
						n = '|';
					}
					if (hangman[k] == 9) {
						m = "___";
						std::cout << "You have lost the game!";
						counter = 10;
					}
					k++;
				}
				std::cout << one << two << three << four << std::endl;
			}
			if (length == 5) {
				if (guess == word[0]) {
					one = guess;
					counter++;
				}
				if (guess == word[1]) {
					two = guess;
					counter++;
				}
				if (guess == word[2]) {
					three = guess;
					counter++;
				}
				if (guess == word[3]) {
					four = guess;
					counter++;
				}
				if (guess == word[4]) {
					five = guess;
					counter++;
				}
				if (guess != word[4] && guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
					std::cout << "You guessed the wrong character, try again!" << std::endl;
					if (hangman[k] == 1) {
						fa = "XXXXXXXXX";
						fb = 'X';
					}
					if (hangman[k] == 2) {
						b = '|';
						ba = '-';
					}
					if (hangman[k] == 3) {
						ha = "_______";
					}
					if (hangman[k] == 4) {
						hb = "_______";
					}
					if (hangman[k] == 5) {
						la = "--";
						lb = '|';
						le = '_';
					}
					if (hangman[k] == 6) {
						ld = "--";
						lc = '|';
						lf = '_';
					}
					if (hangman[k] == 7) {
						e = '.';
					}
					if (hangman[k] == 8) {
						n = '|';
					}
					if (hangman[k] == 9) {
						m = "___";
						std::cout << "You have lost the game!";
						counter = 10;
					}
					k++;
				}
				std::cout << one << two << three << four << five << std::endl;
			}
			if (length == 6) {
				if (guess == word[0]) {
					one = guess;
					counter++;
				}
				if (guess == word[1]) {
					two = guess;
					counter++;
				}
				if (guess == word[2]) {
					three = guess;
					counter++;
				}
				if (guess == word[3]) {
					four = guess;
					counter++;
				}
				if (guess == word[4]) {
					five = guess;
					counter++;
				}
				if (guess == word[5]) {
					six = guess;
					counter++;
				}
				if (guess != word[5] && guess != word[4] && guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
					std::cout << "You guessed the wrong character, try again!" << std::endl;
					if (hangman[k] == 1) {
						fa = "XXXXXXXXX";
						fb = 'X';
					}
					if (hangman[k] == 2) {
						b = '|';
						ba = '-';
					}
					if (hangman[k] == 3) {
						ha = "_______";
					}
					if (hangman[k] == 4) {
						hb = "_______";
					}
					if (hangman[k] == 5) {
						la = "--";
						lb = '|';
						le = '_';
					}
					if (hangman[k] == 6) {
						ld = "--";
						lc = '|';
						lf = '_';
					}
					if (hangman[k] == 7) {
						e = '.';
					}
					if (hangman[k] == 8) {
						n = '|';
					}
					if (hangman[k] == 9) {
						m = "___";
						std::cout << "You have lost the game!";
						counter = 10;
					}
					k++;
				}
				std::cout << one << two << three << four << five << six << std::endl;
			}
			if (length == 7) {
				if (guess == word[0]) {
					one = guess;
					counter++;
				}
				if (guess == word[1]) {
					two = guess;
					counter++;
				}
				if (guess == word[2]) {
					three = guess;
					counter++;
				}
				if (guess == word[3]) {
					four = guess;
					counter++;
				}
				if (guess == word[4]) {
					five = guess;
					counter++;
				}
				if (guess == word[5]) {
					six = guess;
					counter++;
				}
				if (guess == word[6]) {
					seven = guess;
					counter++;
				}
				if (guess != word[6] && guess != word[5] && guess != word[4] && guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
					std::cout << "You guessed the wrong character, try again!" << std::endl;
					if (hangman[k] == 1) {
						fa = "XXXXXXXXX";
						fb = 'X';
					}
					if (hangman[k] == 2) {
						b = '|';
						ba = '-';
					}
					if (hangman[k] == 3) {
						ha = "_______";
					}
					if (hangman[k] == 4) {
						hb = "_______";
					}
					if (hangman[k] == 5) {
						la = "--";
						lb = '|';
						le = '_';
					}
					if (hangman[k] == 6) {
						ld = "--";
						lc = '|';
						lf = '_';
					}
					if (hangman[k] == 7) {
						e = '.';
					}
					if (hangman[k] == 8) {
						n = '|';
					}
					if (hangman[k] == 9) {
						m = "___";
						std::cout << "You have lost the game!";
						counter = 10;
					}
					k++;
				}
				std::cout << one << two << three << four << five << six << seven << std::endl;
			}
			if (length == 8) {
				if (guess == word[0]) {
					one = guess;
					counter++;
				}
				if (guess == word[1]) {
					two = guess;
					counter++;
				}
				if (guess == word[2]) {
					three = guess;
					counter++;
				}
				if (guess == word[3]) {
					four = guess;
					counter++;
				}
				if (guess == word[4]) {
					five = guess;
					counter++;
				}
				if (guess == word[5]) {
					six = guess;
					counter++;
				}
				if (guess == word[6]) {
					seven = guess;
					counter++;
				}
				if (guess == word[7]) {
					eight = guess;
					counter++;
				}
				if (guess != word[7] && guess != word[6] && guess != word[5] && guess != word[4] && guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
					std::cout << "You guessed the wrong character, try again!" << std::endl;
					if (hangman[k] == 1) {
						fa = "XXXXXXXXX";
						fb = 'X';
					}
					if (hangman[k] == 2) {
						b = '|';
						ba = '-';
					}
					if (hangman[k] == 3) {
						ha = "_______";
					}
					if (hangman[k] == 4) {
						hb = "_______";
					}
					if (hangman[k] == 5) {
						la = "--";
						lb = '|';
						le = '_';
					}
					if (hangman[k] == 6) {
						ld = "--";
						lc = '|';
						lf = '_';
					}
					if (hangman[k] == 7) {
						e = '.';
					}
					if (hangman[k] == 8) {
						n = '|';
					}
					if (hangman[k] == 9) {
						m = "___";
						std::cout << "You have lost the game!";
						counter = 10;
					}
					k++;
				}
				std::cout << one << two << three << four << five << six << seven << eight << std::endl;
			}
			if (length == 9) {
				if (guess == word[0]) {
					one = guess;
					counter++;
				}
				if (guess == word[1]) {
					two = guess;
					counter++;
				}
				if (guess == word[2]) {
					three = guess;
					counter++;
				}
				if (guess == word[3]) {
					four = guess;
					counter++;
				}
				if (guess == word[4]) {
					five = guess;
					counter++;
				}
				if (guess == word[5]) {
					six = guess;
					counter++;
				}
				if (guess == word[6]) {
					seven = guess;
					counter++;
				}
				if (guess == word[7]) {
					eight = guess;
					counter++;
				}
				if (guess == word[8]) {
					nine = guess;
					counter++;
				}
				if (guess != word[8] && guess != word[7] && guess != word[6] && guess != word[5] && guess != word[4] && guess != word[3] && guess != word[2] && guess != word[1] && guess != word[0]) {
					std::cout << "You guessed the wrong character, try again!" << std::endl;
					if (hangman[k] == 1) {
						fa = "XXXXXXXXX";
						fb = 'X';
					}
					if (hangman[k] == 2) {
						b = '|';
						ba = '-';
					}
					if (hangman[k] == 3) {
						ha = "_______";
					}
					if (hangman[k] == 4) {
						hb = "_______";
					}
					if (hangman[k] == 5) {
						la = "--";
						lb = '|';
						le = '_';
					}
					if (hangman[k] == 6) {
						ld = "--";
						lc = '|';
						lf = '_';
					}
					if (hangman[k] == 7) {
						e = '.';
					}
					if (hangman[k] == 8) {
						n = '|';
					}
					if (hangman[k] == 9) {
						m = "___";
						std::cout << "You have lost the game!";
						counter = 10;
					}
					k++;
				}
				std::cout << one << two << three << four << five << six << seven << eight << nine << std::endl;
			}
			std::cout << "     __________________                " << std::endl;
			std::cout << "    |                  |               " << std::endl;
			std::cout << "    |              " << fa << "           " << std::endl;
			std::cout << "    |              " << fb << " " << e << "   " << e << " " << fb << "           " << std::endl;
			std::cout << "    |              " << fb << "   " << n << "   " << fb << "           " << std::endl;
			std::cout << "    |              " << fb << "  " << m << "  " << fb << "           " << std::endl;
			std::cout << "    |              " << fa << "           " << std::endl;
			std::cout << "    |                  " << b << "               " << std::endl;
			std::cout << "    |           " << ha << "" << b << "" << hb << "        " << std::endl;
			std::cout << "    |                  " << b << "               " << std::endl;
			std::cout << "    |                  " << b << "               " << std::endl;
			std::cout << "    |                " << la << "" << ba << "" << ld << "             " << std::endl;
			std::cout << "    |               " << lb << "     " << lc << "            " << std::endl;
			std::cout << "    |               " << lb << "     " << lc << "            " << std::endl;
			std::cout << "  _____            " << le << "       " << lf << "           " << std::endl;
		} while (counter < word.size());
		}
		else {
			std::cout << "Invalid input";
			playagain = false;
		}
		if (counter < 10) {
			std::cout << "Congratulation you have won the game!" << std::endl;
		}
		std::cout << "Would you like to play again?" << std::endl;
		std::cout << "Yes type: 1     No type: 2" << std::endl;
		std::cin >> again;
		if (again == 1) {
			playagain = true;
		}
		if (again != 1) {
			playagain = false;
		}
	} while (playagain == true);
}






