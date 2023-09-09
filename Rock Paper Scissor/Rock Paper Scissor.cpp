
#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>
#include <string>
#include <windows.h>
#include "Game.h"
Game game;
using namespace std;
int main()
{
    
     ifstream File;
     time_t ttime = time(0);

     string dt = ctime(&ttime);
     string name = ".txt";
     string fileName = dt + name;
    File.open(fileName);
    if (!File.is_open()) {
        ofstream File;
        cout << "Creating new txt..." << endl;
        File.open(fileName);

        cout << "File created !" << endl;
    }
    File.open("history.txt");
    if (File.is_open()) {
   
        File.close();
    }
    int a = 0;
    while (a != 2) {
       
        cout << "1 | New game" << endl
            << "2 | Exit" << endl;
        cout << "-> ";
        cin >> a;
        switch (a)
        {
        case 1: {
            game.newGame();
            break;
        }
        case 2: {
            cout << "Exiting the game !" << endl;
        }

        default: {
            cout << "Wrong option ! Try again !" << endl;
        }
            break;
        }
    }

}
