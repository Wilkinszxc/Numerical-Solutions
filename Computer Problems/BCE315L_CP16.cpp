#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int gotoxy(int x, int y);

int main(){
    int integers[10];
    int sum = 0, largest, smallest;
    char choice;

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

    gotoxy( 30, 5);
    cout << "+--------------+--------------+--------------+";
    gotoxy(30, 6);
    cout << "|    Average   |    Largest   |   Smallest   |";
    gotoxy(30, 7);
    cout << "+--------------+--------------+--------------+";
    gotoxy(30, 8);
    cout << "|              |              |              |";
    gotoxy(30, 9);
    cout << "|              |              |              |";
    gotoxy(30, 10);
    cout << "|              |              |              |";
    gotoxy( 30, 11);
    cout << "+--------------+--------------+--------------+";
    
    gotoxy(36, 9); 
    cout << average;
    gotoxy(52, 9);
    cout << largest;
    gotoxy(68, 9);
    cout << smallest;

    gotoxy(0, 18);
    cout << "Do you want to redo calculations? (y/n): ";
    cin >> choice;

    if(choice == 'N' || choice == 'n'){
        system("pause");
        return 0;
    }else {
        system("cls");
        main();
    }

    return 0;
}


int gotoxy(int x, int y){
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}