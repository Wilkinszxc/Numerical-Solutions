#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int gotoxy(int x, int y);

int main(){

    double x, result, term;
    int yPOS = 7;
    char choice;

    cout << "Name: AL WILKINS BURGOS\n";
    cout << "BCE 315L (420)\n";
    cout << "CP13 - e^x Value Calculation\n\n";

    cout << "+----------+--------------------+\n";
    cout << "|    x     |        e^x         |\n";
    cout << "+----------+--------------------+\n";

    for(int i = 1; i < 101; i++){
        gotoxy(0, yPOS);
        cout << "|          |                    |\n";
        cout << "+----------+--------------------+\n";
        cout << "                                 \n";
        cout << "                                 \n";

        gotoxy(6, yPOS);
        cout << i;
        gotoxy(18, yPOS);
        cout << setprecision(4) << exp(i);
        yPOS++;

        gotoxy(0, yPOS + 2);
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

        if(choice == 'N' || choice == 'n'){
            break;
        }

    }


    cout << endl << endl;
    system("pause");

}

int gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
