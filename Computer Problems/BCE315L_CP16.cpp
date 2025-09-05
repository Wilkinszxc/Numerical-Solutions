#include <iostream>
#include <windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int gotoxy(int x, int y);

int main(){
    int integers[10];
    int sum = 0, largest, smallest;

    cout << "Name: AL WILKINS BURGOS\n";
    cout << "BCE 315L (420)\n";
    cout << "CP13 - 10 integer's Average, Largest, Smallest Number\n\n";

    for(int i = 0; i < 10; i++){
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> integers[i];
        sum += integers[i];

        if(i == 0){
            largest = smallest = integers[i];
        } else {
            if(integers[i] > largest) largest = integers[i];
            if(integers[i] < smallest) smallest = integers[i];
        }
    }

    double average = sum / 10.0;

    cout << "\nAverage: " << average << endl;
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;



    cout << endl << endl;
    system("pause");
}


int gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}
