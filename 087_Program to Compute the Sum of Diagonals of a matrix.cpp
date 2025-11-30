#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int matrix[10][10];
    int i, j, n;
    int sumMain = 0, sumSecond = 0;

    cout << "Enter the size of the square matrix: ";
    cin >> n;

    cout << "Enter elements of the matrix:" << endl;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for(i = 0; i < n; i++) {
        sumMain = sumMain + matrix[i][i];
        sumSecond = sumSecond + matrix[i][n - 1 - i];
    }

    cout << "Sum of Main Diagonal: " << sumMain << endl;
    cout << "Sum of Secondary Diagonal: " << sumSecond << endl;

    getch();
}
