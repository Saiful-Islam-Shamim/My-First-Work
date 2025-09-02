#include<iostream>

using namespace std;

int main()
{
     int row, col;
     cout << "Enter row and col Number : "<< endl;
     cin >> row >> col;

     cout << "You need to give "<< row * col<< " for Matrix."<<endl;


    int matrix[100][100];


    // input;
    cout << "Enter Matrix elements : ";
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    //output;
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            cout << matrix[i][j]<< "   ";
        }
        cout <<endl;
    }
    return 0;
}
