//monthly message program. Oladamola Ola-Buraimo. 03/11/24. This code will take the month and display a kind message.
#include <iostream>
using namespace std;

int main() {
    int monthNumber;

    cout << "Enter a month number (1 = January, 2 = February, etc.): ";
    cin >> monthNumber;

    switch (monthNumber) {
    case 1:
        cout << "January: Happy New Year! Stay warm." << endl;
        break;
    case 2:
        cout << "February:  Bundle up for the winter chill." << endl;
        break;
    case 3:
        cout << "March:  Prepare for blossoms and showers." << endl;
        break;
    case 4:
        cout << "April: Welcome to spring! ." << endl;
        break;
    case 5:
        cout << "May: Summer is around the corner." << endl;
        break;
    case 6:
        cout << "June: School's out! SUns In." << endl;
        break;
    case 7:
        cout << "July: Happy Independence Day! " << endl;
        break;
    case 8:
        cout << "August: The last month of summer." << endl;
        break;
    case 9:
        cout << "September: Fall is approaching." << endl;
        break;
    case 10:
        cout << "October: Halloween is near. Boo!" << endl;
        break;
    case 11:
        cout << "November: Thanksgiving is coming. Turkey Time Baby." << endl;
        break;
    case 12:
        cout << "December: Merry Christmas! Merry Xmas" << endl;
        break;
    default:
        cout << "Error: Invalid month number. Please enter a number between 1 and 12." << endl;
        break;
    }

    return 0;
}
