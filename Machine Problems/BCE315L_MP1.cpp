//PROPERTY OF AL WILKINS BURGOS

#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int gotoxy(int x, int y);
double A, B, C;
double disc, X1, X2;
int yPOS = 6;

int main() {
    while (true) {
        system("cls");
        yPOS = 6;

        cout << "NAME: AL WILKINS BURGOS" << endl;
        cout << "TITLE: QUADRATIC EQUATION SOLVER" << endl << endl;

        cout << "+----------+----------+----------+---------------------------------------------------------+" << endl;
        cout << "|     A    |     B    |     C    |                            ROOTS                        |" << endl;
        cout << "+----------+----------+----------+---------------------------------------------------------+" << endl;

        while (true) {
            gotoxy(0, yPOS);
            cout << "|          |          |          |                                                         |" << endl;
        	cout << "+----------+----------+----------+---------------------------------------------------------+" << endl;

            gotoxy(6, yPOS);  cin >> A;
            gotoxy(17, yPOS); cin >> B;
            gotoxy(28, yPOS); cin >> C;

            gotoxy(35, yPOS);
            cout << "                                     ";
            gotoxy(35, yPOS);

            disc = (B * B) - (4 * A * C);

            if (disc >= 0) {
                X1 = (-B + sqrt(disc)) / (2 * A);
                X2 = (-B - sqrt(disc)) / (2 * A);
                cout << "x1 = " << fixed << setprecision(3) << X1 << ", x2 = " << fixed << setprecision(3) << X2;
            } else {
                double realPart = -B / (2 * A);
                double imaginaryPart = sqrt(-disc) / (2 * A);
                cout << "x1 = " << fixed << setprecision(3) << realPart << " + " << imaginaryPart << "i, ";
                cout << "x2 = " << realPart << " - " << imaginaryPart << "i";
            }

            yPOS += 2;

  
            char userInput;
            cout << "\n\n\nDo you want to continue with a new calculation? (y/n): ";
            cin >> userInput;

            if (userInput == 'n' || userInput == 'N') {
                break; 
            } else if (userInput != 'y' && userInput != 'Y') {
                cout << "Invalid input. Exiting program." << endl;
                return 0; 
            }
        }
    }

    return 0;
}

int gotoxy(int x, int y) {
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
    return 0;
}

