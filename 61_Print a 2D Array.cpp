#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, reverce, rem, result=0;

    cout << "Enter any number: ";
    cin >> n;

    while(n != 0)
    {
        rem = n % 10;
        result = result * 10 + rem;
        n = n/10;

    }
    cout << result;
    getch();
}
