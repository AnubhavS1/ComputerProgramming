// Anubhav Shelat
//Lab4_
// F Block

// include files
#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>


using namespace std;

// function prototypes
void input(char running);
double gallons(double length, double width, double height, int doors, int windows);
double containers(double totalGallons);

int main() {
	// set decimal place to two
	cout << setiosflags(ios_base::fixed)
        << setiosflags(ios_base::showpoint)
        << setprecision(2);
	// run program
	char running = 'y';
	if (running == 'y' || running == 'Y') {
		input(running);
	}
    return 0;
}

void input(char running) {
    double length, width, height;
    int windows, doors;
	double totalGallons = 0;
    while (running == 'y' || running == 'Y') {

        cout << "Enter dimensions (length width height): ";
        cin >> length >> width >> height;
        cout << "Enter the number of windows and doors: ";
        cin >> windows >> doors;
		double gallonsValue = gallons(length, width, height, doors, windows);
		cout << "That room will take " << gallonsValue << " gallons of paint." << endl;
		totalGallons = totalGallons + gallonsValue;
		cout << "\nAnother room (y/n): ";
		cin >> running;
		// break out of the function
		if (running == 'n' || running == 'N') {
			break;
		}
	}
	cout << "\nAll the rooms combined will take " << totalGallons << " gallons of paint.\n" << endl;
	double totalContainers = containers(totalGallons);
}

// calculate gallons needed to paint room
double gallons(double length, double width, double height, int doors, int windows) {
	double value = ((2 * (length * height) + 2 * (width * height)) - 15 * (windows) - 21 * (doors)) / 400.0;
	return value;
}

double containers(double totalGallons) {
	cout << ceil(totalGallons) << " gallon-containers of paint will be required." << endl;
	return totalGallons;
}
