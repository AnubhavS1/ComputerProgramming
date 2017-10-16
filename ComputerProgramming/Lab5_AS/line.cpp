// line.cpp
// by Anubhav Shelat

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Format decimals to two places
    cout << setiosflags(ios_base::fixed)
         << setiosflags(ios_base::showpoint)
         << setprecision(2);
    // Make variables
    double x1, y1, x2, y2;
    // Get points from the user
    cout << "Enter the coordinates for point 1 (x, y): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates for point 2 (x, y): ";
    cin >> x2 >> y2;
    // Determine slope
    double slope = (y2 - y1) / (x2 - x1);
    // Determine y intercept
    double yInt = y1 - (slope * x1);
    // Conditional statements
    if ((x1 == x2) && (y1 == y2)) {
        cout << "Alert! These two points don't form a line." << endl;
    }
    else if (y1 == y2) {
        cout << "Alert! This line is horizontal." << endl;
        cout << "The equation of this line is y = " << y1 << "." << endl;
    }
    else if (x1 == x2) {
        cout << "Alert! This line is vertical." << endl;
        cout << "The equation of the line is x = " << x1 << "." << endl;
    }
    else {
        cout << "The slope of the line is " << slope << "." << endl;
        if (yInt > 0) {
            cout << "The equation of the line is y = " << slope << "x + " << yInt << endl;
        }
        else {
            cout << "The equation of the line is y = " << slope << "x" << yInt << endl;
        }
    }
    return 0;
}
