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
        float a, b, h;
        int xPOS, yPOS;

        system("cls"); // clear screen each run

        cout << "Name: AL WILKINS BURGOS" << endl;
        cout << "BCE 315L (420)" << endl;
        cout << "CP1 - CALCULATING HYPOTENUSE" << endl << endl;

        xPOS = 8;
        yPOS = 5;

        for (int i = 1; i <= 10; i++) {
            gotoxy(xPOS, yPOS);
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            yPOS++;
        }

        gotoxy(4, 11);
        cin >> a;

        gotoxy(12, 16);
        cin >> b;

        h = sqrt(pow(a, 2) + pow(b, 2)); // corrected formula

        gotoxy(17, 10);
        cout << fixed << setprecision(2) << h;

        gotoxy(30, 5);
        cout << "+----------+----------+----------+";
        gotoxy(30, 6);
        cout << "|            RESULTS~            |";
        gotoxy(30, 7);
        cout << "+----------+----------+----------+";
        gotoxy(30, 8);
        cout << "|     A    |     B    |     C    |";
        gotoxy(30, 9);
        cout << "+----------+----------+----------+";
        gotoxy(30, 10);
        cout << "|          |          |          |";
        gotoxy(30, 11);
        cout << "|   " << setprecision(2) <<a << "   |   " << setprecision(2)  << b << "   |   " << setprecision(2)  << h << "   |";
        gotoxy(30, 12);
        cout << "|          |          |          |";
        gotoxy(30, 13);
        cout << "+----------+----------+----------+";

        gotoxy(0, 15);

        cout << "\n\n\nDo you want to create a new calculation? (y/n): ";
        cin >> userInput;

        if (userInput != 'y' && userInput != 'Y' && userInput != 'n' && userInput != 'N') {
            cout << "Invalid input. Exiting program." << endl;
            break;
        }
        
    }

    gotoxy(0, 20);
    system("pause");

}

void gotoxy(int x, int y) {
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}
