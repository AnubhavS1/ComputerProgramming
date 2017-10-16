// Anubhav Shelat
// F block
// Lab8: The Birthday Baffler

#include <iostream>

using namespace std;

int main()
{
    // set variables
    int day, month, year;
    // check date
    bool validDate = false;
    while (validDate == false) {
        // get date
        cout << "Enter the year in which you where born:  ";
        cin >> year;
        cout << "Enter the month of your birthday: ";
        cin >> month;
        cout << "Enter the day of the month your birthday is in: ";
        cin >> day;
        if ((day < 32) || (day > 0) || (month < 13) || (month > 0) || (year < 2100) || (year > 1751)) {
            validDate = true;
        }
        else {
            cout << "The date you entered was invalid." << endl;
        }
    }
    // make the step 2 and 3 variables
    int step2 = 2 * (3 - (((year - (year % 100)) / 100) % 4));
    int step3 = year % 100;
    int step4 = (year % 100) / 4;
    // test for leap year
    bool leapYear = false;
    if (((year % 400 == 0) || (year % 4 == 0))) {
        leapYear = true;
    }
    int step6;
    if (leapYear == true) {
        switch (month) {
            case 1:
                step6 = 0;cout << step2 << endl;
                break;
            case 2:
                step6 = 3;
                break;
            case 3:
                step6 = 4;
                break;
            case 4:
                step6 = 0;
                break;
            case 5:
                step6 = 2;
                break;
            case 6:
                step6 = 5;
                break;
            case 7:
                step6 = 0;
                break;
            case 8:
                step6 = 3;
                break;
            case 9:
                step6 = 6;
                break;
            case 10:
                step6 = 1;
                break;
            case 11:
                step6 = 4;
                break;
            case 12:
                step6 = 6;
                break;
            }
        }
        else if (leapYear == false) {
            switch (month) {
                case 1:
                    step6 = 1;
                    break;
                case 2:
                    step6 = 4;
                    break;
                case 3:
                    step6 = 4;
                    break;
                case 4:
                    step6 = 0;
                    break;
                case 5:
                    step6 = 2;
                    break;
                case 6:
                    step6 = 5;
                    break;
                case 7:
                    step6 = 0;
                    break;
                case 8:
                    step6 = 3;
                    break;
                case 9:
                    step6 = 6;
                    break;
                case 10:
                    step6 = 1;
                    break;
                case 11:
                    step6 = 4;
                    break;
                case 12:
                    step6 = 6;
                    break;
        }
    }
    // determine the day of week person was born on
    int step8 = step2 + step3 + step4 + step6 + day;
    int step9 = (step8) % 7;
    string dayOfWeek;
    switch (step9) {
        case 0:
            dayOfWeek = "Saturday";
            break;
        case 1:
            dayOfWeek = "Sunday";
            break;
        case 2:
            dayOfWeek = "Monday";
            break;
        case 3:
            dayOfWeek = "Tuesday";
            break;
        case 4:
            dayOfWeek = "Wednesday";
            break;
        case 5:
            dayOfWeek = "Thursday";
            break;
        case 6:
            dayOfWeek = "Friday";
            break;
    }
    cout << "Your birtday was on " << dayOfWeek << endl;
    cout << step2 << " " << step3 << " " << step4 << " "<< step6 << " "<< day << " " << step9 <<endl;
    return 0;
}
