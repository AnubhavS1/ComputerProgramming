// Lab 6
// by Anubhav Shelat

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Set decimal place to two
    cout << setiosflags(ios_base::fixed)
         << setiosflags(ios_base::showpoint)
         << setprecision(2);
    // Get number of weeks in pay period
    int weeks;
    cout << "Enter the number of weeks in this pay period: ";
    cin >> weeks;
    // Set variable for hours worked
    int hrs;
    // Get sum of pay for all weeks in period
    double sum;
    // Make for loop to get take home pay
    for (int i = 0; i < weeks; i++) {
        cout << "Enter the number of hours worked this week: ";
        cin >> hrs;
        double pay = (7.72 * hrs) - 0.33 * (7.72 * hrs);
        cout << "Your take-home pay for this week is " << pay << "." << endl;
        sum = sum + pay;
    }
    cout << "\nYour total take-home pay for this pay period is " << sum << "." << endl;
    return 0;
}
