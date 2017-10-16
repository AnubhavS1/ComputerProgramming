// Lab 7
// by Anubhav Shelat

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Set decimal place to two
    cout << setiosflags(ios_base::fixed)
         << setiosflags(ios_base::showpoint)
         << setprecision(2);
    // Intro
    cout << "Welcome to Five Babbage Burgers and Fries payroll calculator!\n" << endl;
    // Run do ... while loop
    char running;
    cout << "Do you have an employee to pay (Y or N)?";
    cin >> running;
    do {
        // Set variables for pay and hours
        double pay;
        double hours;
        // Get first name and last name
        string fname;
        cout << "\nWhat is their First Name? ";
        cin  >> fname;
        string lname;
        cout << "\nWhat is their Last Name? ";
        cin >> lname;
        // Get their role
        cout << "\nWhat is their role here at Five Babbage Burgers and Fries Inc.?" << endl;
        cout << "\nA. Counter staff"
             << "\nK. Kitchen Cook"
             << "\nD. Dishwasher"
             << "\nM. Manager\n" << endl;
        char role;
        cout << "Please choose an option: ";
        cin >> role;
        // Get number of hours worked
        cout << "\nEnter the number of hours worked: ";
        cin >> hours;
        // Determine pay for each role
        if (role == 'A') {
            pay = (hours * 10.50) - (0.28 * (hours * 10.50));
        }
        else if (role == 'K') {
            pay = (hours * 15.75) - (0.28 * (hours * 15.75));
        }
        else if (role == 'D') {
            pay = (hours * 10.50) - (0.28 * (hours * 10.50));
        }
        else if (role == 'M') {
            pay = 48000;
        }

        cout << "\nPaycheck Information: " << fname << lname << " . . . . . $" << pay << "\n" << endl;
        cout << "Do you have another employee to pay (Y or N)?" << endl;
        cin >> running;
    } while (running == 'Y');

    return 0;
}
