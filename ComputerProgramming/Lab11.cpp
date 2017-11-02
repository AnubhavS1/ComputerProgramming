// Anubhav Shelat
// F Block
// Lab 11

#include <iostream>
#include <iomanip>

using namespace std;

void input(bool running);
void menu(double fNum, double fDen, double sNum, double sDen);
double operationType(double operation, double fNum, double fDen, double sNum, double sDen);
double muliplication(double num1, double num2);
double division(double num1, double num2);


int main() {
    bool running = true;
    while (running == true) {
        input(running);
    }
}

void input (bool running) {
    double fNum, fDen, sNum, sDen;
    while (running == true) {
        cout << "Enter the numerator and denominator of the first fraction: ";
        cin >> fNum >> fDen;
        cout << "Enter the numerator and denominator of the second fraction: ";
        cin >> sNum >> sDen;
        if (fDen == 0 || sDen == 0) {
            cout << "Fractions with denominator of 0 are undefined." << endl;
         }
         else if (fDen != 0 || sDen != 0) {
             running = false;
         }
    }
    menu(fNum, fDen, sNum, sDen);
}

void menu(double fNum, double fDen, double sNum, double sDen) {
    cout << "\nMenu of Operations" << endl;
    cout << "Multiply..............1" << endl;
    cout << "Divide................2" << endl;
    int operation;
    cout << "\nWhich operation? ";
    cin >> operation;
    operationType(operation, fNum, fDen, sNum, sDen);
}

double operationType(double operation, double fNum, double fDen, double sNum, double sDen) {
    if (operation == 1) {
        cout << " " << fNum << "       " << sNum << "       \n"
        << "---  *  ---";
    }
}

double muliplication(double num1, double num2) {
    double product = num1 * num2;
    return product;
}

double division(double num1, double num2) {
    double quotient = num1 / num2;
    return quotient;
}
