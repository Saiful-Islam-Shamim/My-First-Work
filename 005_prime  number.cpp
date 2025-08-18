
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num, i;
    bool isPrime = true;

    cout << "Enter a positive number: ";
    cin >> num;

    if (num <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (i = 2; i <= num /2; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout <<"prime number " << endl;
    else
        cout << "not a prime number ";

    getch();
}
