#pragma once
#include <iostream>
#include <ctime>

using namespace std;



class Game {
private:
	string objects[3] = {
		"Rock", "Paper", "Scissor"
	};
	string pc, you;
public:
	void writeTxt(int i) {
		time_t ttime = time(0);

		char* dt = ctime(&ttime);
		ofstream File;
		File.open("history.txt");
		if (i == 0) {
			File << dt << " - Game: Equal" << endl;
			
		}
		else if (i == 1) {
			File << dt << " - Game: PC won" << endl;
			
		}
		else {
			File << dt << " - Game: User won" << endl;
		
		}

	}
	 
	void newGame() {
		srand(time(nullptr));
		int x,y;
		x = rand() % 3;
		do {
			cout << "Your choose: " << endl
				<< "1 | Rock" << endl
				<< "2 | Paper" << endl
				<< "3 | Scissor" << endl;
			cin >> y;
			if (y < 1 || y > 3) {
				cout << "Wrong , choose again !" << endl;
			}
		} while (y < 1 || y > 3);
		y = y - 1;
		cout << "U choose: " << objects[y] << endl
			<< "PC choose: " << objects[x] << endl;
		if (x == y) {
			cout << "Equal !" << endl;
			writeTxt(0);
		}
		else if (x == 0 && y == 1) {
			cout << "You won !" << endl;
			writeTxt(2);
		}
		else if (x == 0 && y == 2) {
			cout << "PC won !" << endl;
			writeTxt(1);
		}
		else if (x == 1 && y == 0) {
			cout << "PC won !" << endl;
			writeTxt(1);
		}
		else if (x == 2 && y == 0) {
			cout << "You won !" << endl;
			writeTxt(2);
		}
		else if (x == 1 && y == 2) {
			cout << "You won !" << endl;
			writeTxt(2);
		}
		else {
			cout << "PC won !" << endl;
			writeTxt(1);
		}
		
	}

};