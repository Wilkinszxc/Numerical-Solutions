#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

const int col1 = 8;
const int col2 = 10;
const int col3 = 12;
const int col4 = 14;
const int col5 = 12;

void printLine() {
    cout << "+" << string(col1, '-') 
         << "+" << string(col2, '-') 
         << "+" << string(col3, '-') 
         << "+" << string(col4, '-') 
         << "+" << string(col5, '-') 
         << "+" << endl;
}

int main() {
    cout << "Name: AL WILKINS BURGOS" << endl;
    cout << "BCE 315L (420)" << endl;
    cout << "CP8 - SQUARE, SQUARE ROOTS, 4TH POWER, & 4TH ROOT OF 0 TO 25" << endl << endl;

    printLine();
    cout << "|" << left << setw(col1) << "Number"
         << "|" << left << setw(col2) << "Square"
         << "|" << left << setw(col3) << "Square Root"
         << "|" << left << setw(col4) << "4th Power"
         << "|" << left << setw(col5) << "4th Root"
         << "|" << endl;
    printLine();

    for (int i = 0; i <= 25; i++) {
        int square = i * i;
        int fourthPow = i * i * i * i;
        double sqrRoot = sqrt(i);
        double fourthRoot = pow(i, 0.25);

        cout << "|" << right << setw(col1) << i
             << "|" << right << setw(col2) << square
             << "|" << right << setw(col3) << fixed << setprecision(4) << sqrRoot
             << "|" << right << setw(col4) << fourthPow
             << "|" << right << setw(col5) << fixed << setprecision(4) << fourthRoot
             << "|" << endl;

        printLine();
    }

    cout << endl;
    system("pause");
    return 0;
}
