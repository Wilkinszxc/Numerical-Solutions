#include <iostream>
#include <windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int gotoxy(int x, int y);

int main(){
    cout << "Name: AL WILKINS BURGOS" << endl;
    cout << "BCE 315L (420)" << endl;
    cout << "CP13 - e^x Value Calculation" << endl << endl;
   
 
}

int gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
