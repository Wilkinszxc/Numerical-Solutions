#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void gotoxy(int x, int y);

int main() {
    char userInput = 'y';

    while (userInput == 'y' || userInput == 'Y') {
        float a, b, c, A, s;
        int xPOS, yPOS;

        system("cls"); // clear screen each run

        cout << "Name: AL WILKINS BURGOS" << endl;
        cout << "BCE 315L (420)" << endl;
        cout << "CP4 - CALCULATING AREA OF A TRIANGLE" << endl << endl;

        // Draw a right triangle pattern
        xPOS = 8;
        yPOS = 5;
        for (int i = 1; i <= 10; i++) {
            gotoxy(xPOS, yPOS);
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            yPOS++;
        }

        // Input values
        gotoxy(4, 11);
        cin >> a;

        gotoxy(12, 16);
        cin >> b;

        gotoxy(17, 10);
        cin >> c;

        // Check triangle validity
        if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
            gotoxy(0, 16);
            cout << "NOTE: The sum of any two sides must be greater than the third side." << endl;
            cout << "\nDo you want to create a new calculation? (y/n): ";
            cin >> userInput;

            if (userInput != 'y' && userInput != 'Y' && userInput != 'n' && userInput != 'N') {
                cout << "Invalid input. Exiting program." << endl;
                break;
            }
            continue; // restart loop
        }

        // Heron's formula
        s = (a + b + c) / 2.0f;
        A = sqrt(s * (s - a) * (s - b) * (s - c));

        // Results table
        gotoxy(30, 5);
        cout << "+----------+----------+----------+";
        gotoxy(30, 6);
        cout << "|            RESULTS             |";
        gotoxy(30, 7);
        cout << "+----------+----------+----------+";
        gotoxy(30, 8);
        cout << "|     A    |     B    |     C    |";
        gotoxy(30, 9);
        cout << "+----------+----------+----------+";
        gotoxy(30, 10);
        cout << "| " << setw(8) << fixed << setprecision(2) << a
             << " | " << setw(6) << b
             << "   | " << setw(6) << c << "   |";
        gotoxy(30, 11);
        cout << "+----------+----------+----------+";
        gotoxy(30, 12);
        cout << "|                                |";
        gotoxy(30, 13);
        cout << "|          AREA = " << fixed << setprecision(3) << setw(5) << A << "          |";
        gotoxy(30, 14);
        cout << "|                                |";
        gotoxy(30, 15);
        cout << "+----------+----------+----------+";

        // Repeat?
        gotoxy(0, 18);
        cout << "\nDo you want to create a new calculation? (y/n): ";
        cin >> userInput;

        if (userInput != 'y' && userInput != 'Y' && userInput != 'n' && userInput != 'N') {
            cout << "Invalid input. Exiting program." << endl;
            break;
        }
    }

    gotoxy(0, 22);
    system("pause");
}

void gotoxy(int x, int y) {
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}
