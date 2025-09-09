#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int gotoxy(int x, int y);

int main() {
    int m, n, p;

    cout << "Name: AL WILKINS BURGOS\n";
    cout << "BCE 315L (420)\n";
    cout << "CP18 - Matrix Multiplication\n\n";

    // Input sizes
    cout << "Enter rows and columns for first matrix (m n): ";
    cin >> m;
    gotoxy(50, 4);
    cin >> n;
    cout << "Enter columns for second matrix (p): ";
    cin >> p;

    int mat1[20][20], mat2[20][20], product[20][20];

    // Position label for Matrix A
    gotoxy(0, 7); // shifted down 1 line
    cout << "Enter Matrix A (" << m << "x" << n << "):";

    // Input for Matrix A
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            gotoxy(5 + j * 6, 9 + i);  // A starts at row 9
            cin >> mat1[i][j];
        }
    }

    // Label for Matrix B
    gotoxy(0, 11 + m); // +1 line spacing
    cout << "Enter Matrix B (" << n << "x" << p << "):";

    // Input for Matrix B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            gotoxy(5 + j * 6, 13 + m + i);  // B starts at row 13
            cin >> mat2[i][j];
        }
    }

    // Compute product matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            product[i][j] = 0;
            for (int k = 0; k < n; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Label for Product Matrix
    gotoxy(0, 15 + m + n); // +1 space above
    cout << "Product Matrix (" << m << "x" << p << "):";

    // Display Product Matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            gotoxy(5 + j * 6, 17 + m + n + i); // start row +1
            cout << setw(5) << product[i][j];
        }
    }

    gotoxy(0, 19 + m + n + m); // +1 space after output
    system("pause");
    return 0;
}

int gotoxy(int x, int y) {
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
    return 0;
}
