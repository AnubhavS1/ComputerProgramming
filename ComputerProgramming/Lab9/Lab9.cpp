// Anubhav Shelat
// Block: F

#include <iostream>
using namespace std;

// convert function prototype
double convert(double measurment);

int main() {
    cout << "Box calculator" << endl;
    double length, width, height;
    cout << "Length" << endl;
    cout << "Enter the measurment: ";
    cin >> length;
    convert(length);
}

// convert function
double convert(double measurment) {
    char units;
    cout << "units: I. inches   F. feet   C. centimeters   M. meters";
    cin >> units;
    if (units == 'I') {
        measurment = units;
    }
    else if (units == 'F') {
        measurment = units / 12;
    }
    else if (units == 'C') {
        measurment = units / 2.54;
    }
    else if (units == 'M') {
        measurment = units * 39.37;
    }
    return measurment;
}
