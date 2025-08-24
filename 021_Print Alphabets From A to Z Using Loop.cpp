#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    char ch;

    for(ch = 'A'; ch<= 'Z'; ch++)
    {

        cout << setw(4) << ch;
    }
    getch();
}
