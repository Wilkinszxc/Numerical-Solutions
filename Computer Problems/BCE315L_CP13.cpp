#include <iostream>
#include <windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int gotoxy(int x, int y);

int main(){
    cout << "Name: AL WILKINS BURGOS\n";
    cout << "BCE 315L (420)\n";
    cout << "CP13 - e^x Value Calculation\n\n";

    double x, result;
    cout << "Enter the value of x: ";
    cin >> x;

    
 
    result = 1;
    double term = 1;
    for (int n = 1; n <= 20; n++) {
        term *= x / n;
        result += term;
    }

    cout << "e^" << x << " = " << result << endl;
    cout << endl << endl << endl << endl;
    system("pause");

}

int gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
