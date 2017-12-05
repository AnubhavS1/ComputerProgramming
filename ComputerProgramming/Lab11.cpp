// Anubhav Shelat
// F Block
// Lab 11

#include <iostream>
#include <iomanip>
#include<math.h>
#include<stdlib.h>

using namespace std;

void input(char running);
void menu(double fNum, double fDen, double sNum, double sDen);
double display(double operation, double fNum, double fDen, double sNum, double sDen);
void muliplication(double fNum, double fDen, double sNum, double sDen);
void division(double fNum, double fDen, double sNum, double sDen);
int greatestCommonDivisor(int n, int d);


int main() {
    char running;
    running = 'y';
    input(running);
}

void input (char running) {
    double fNum, fDen, sNum, sDen;
    if (running == 'y' && running != 'n') {
        cout << "Enter the numerator and denominator of the first fraction: ";
        cin >> fNum >> fDen;
        cout << "Enter the numerator and denominator of the second fraction: ";
        cin >> sNum >> sDen;
        if (fDen == 0 || sDen == 0) {
            cout << "Fractions with denominator of 0 are undefined." << endl;
         }
         else if (fDen != 0 || sDen != 0) {
             menu(fNum, fDen, sNum, sDen);
         }
    }

}

void menu(double fNum, double fDen, double sNum, double sDen) {
    cout << "\nMenu of Operations" << endl;
    cout << "Multiply..............1" << endl;
    cout << "Divide................2" << endl;
    int operation;
    cout << "\nWhich operation? ";
    cin >> operation;
    display(operation, fNum, fDen, sNum, sDen);
}

double display(double operation, double fNum, double fDen, double sNum, double sDen) {

    if (operation == 1) {
        muliplication(fNum, fDen, sNum, sDen);
    }
    else if (operation == 2) {
        division(fNum, fDen, sNum, sDen);
    }
}

void muliplication(double fNum, double fDen, double sNum, double sDen) {
    char running;
    if ((int) (fNum * sNum) % (int) (fDen * sDen) != 0 && greatestCommonDivisor(fNum * sNum, fDen * sDen) == 1) {
        cout << " " << fNum << "       " << sNum << "       " << fNum * sNum
        << "\n---  *  ---  =  ---\n"
        << " " << fDen << "       " << sDen << "       " << fDen * sDen << "\n";
    }
    else if ((int) (fNum * sNum) % (int) (fDen * sDen) != 0 && greatestCommonDivisor(fNum * sNum, fDen * sDen) > 1) {
        cout << " " << fNum << "       " << sNum << "       " << fNum * sNum << "       " << (fNum * sNum) / greatestCommonDivisor(fNum * sNum, fDen * sDen)
        << "\n---  *  ---  =  ---  =  ---\n"
        << " " << fDen << "       " << sDen << "       " << fDen * sDen << "       " << (fDen *sDen) / greatestCommonDivisor(fNum * sNum, fDen * sDen) << "\n";
    }
    else if ((int) (fNum * sNum) % (int) (fDen * sDen) == 0) {
        cout << " " << fNum << "       " << sNum << "       " << fNum * sNum
        << "\n---  *  ---  =  ---  =  " << (fNum * sNum) / (fDen * sDen) << "\n"
        << " " << fDen << "       " << sDen << "       " << fDen * sDen << "\n";
    }
    cout << "Another problem (y for yes, n for no)? ";
    cin  >> running;
    input(running);
}

void division(double fNum, double fDen, double sNum, double sDen) {
    char running;
    if ((int) (fNum * sDen) % (int) (fDen * sNum) != 0 && greatestCommonDivisor(fNum * sDen, fDen * sNum) == 1) {
        cout << " " << fNum << "       " << sNum << "       " << fNum * sDen
        << "\n---  *  ---  =  ---\n"
        << " " << fDen << "       " << sDen << "       " << fDen * sNum << "\n";
    }
    else if ((int) (fNum * sDen) % (int) (fDen * sNum) != 0 && greatestCommonDivisor(fNum * sDen, fDen * sNum) > 1) {
        cout << " " << fNum << "       " << sNum << "       " << fNum * sDen << "       " << (fNum * sDen) / greatestCommonDivisor(fNum * sDen, fDen * sNum)
        << "\n---  *  ---  =  ---  =  ---\n"
        << " " << fDen << "       " << sDen << "       " << fDen * sNum << "       " << (fDen *sNum) / greatestCommonDivisor(fNum * sDen, fDen * sNum) << "\n";
    }
    else if ((int) (fNum * sDen) % (int) (fDen * sNum) == 0) {
        cout << " " << fNum << "       " << sNum << "       " << fNum * sDen
        << "\n---  *  ---  =  ---  =  " << (fNum * sDen) / (fDen * sNum) << "\n"
        << " " << fDen << "       " << sDen << "       " << fDen * sNum << "\n";
    }
    cout << "Another problem (y for yes, n for no)? ";
    cin  >> running;
    input(running);
}

int greatestCommonDivisor(int n, int d) {
    n = abs(n);
    d = abs(d);

    if (n == 0 || d == 0) {
        return 1;
    }

    while (n != d) {
        if (n > d) {
            n -= d;
        }
        else {
            d -= n;
        }
    }
    return d;
}
