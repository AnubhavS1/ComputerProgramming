/*
Anubhav Shelat
F Block
*/
// include header files

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

// function prototypes
void display(int numGames);
int randomize(int &num);

int main() {
    int numGames;
    cout << "How many games do you want to play? ";
    cin >> numGames;
    display(numGames);
}

void display(int numGames) {
    for (int gameNum = 1, gameCounter = numGames; gameCounter > 0; gameNum++, gameCounter--) {
        int data[3] = {0, 0, 0};
        cout << "    ***  Game " << gameNum << "  ***    \n";
        cout << "Roll  Player 1  Player 2" << endl;
        // each roll
        while (data[0] < 21 || data[1] <= 21 || data[2] <= 21) {
            int p1Increment = 0;
            int p2Increment = 0;
            randomize(p1Increment);
            randomize(p2Increment);
            data[0]++;
            data[1] = data[1] + p1Increment;
            data[2] = data[2] + p2Increment;
            if (data[1] < 21 && data[2] < 21) {
                cout << " " << data[0] << "      " << data[1] << "        " << data[2] << endl;
            }
            else if (data[1] >= 21 && data[2] < 21)  {
                cout << " " << data[0] << "      " << 21 << "        " << data[2] << endl;
                cout << "Player 1 wins!\n" << endl;
                break;
            }
            else if (data[2] >= 21 && data[1] < 21) {
                cout << " " << data[0] << "      " << data[1] << "        " << 21 << endl;
                cout << "Player 2 wins!\n" << endl;
                break;
            }
            else if (data[1] >= 21 && data[2] >= 21) {
                cout << "It's a tie!\n" << endl;
                break;
            }
        }
        if (gameCounter == 0) {
            break;
        }
    }
}

int randomize(int &num) {
    num = rand() % 6;
    if (num == 0) {
        num = 6;
    }
    return num;
}
