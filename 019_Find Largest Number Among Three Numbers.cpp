
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    double num1, num2, num3, largest;
    cout << "Enter Three number : "<< endl;
    cin >> num1 >> num2 >> num3;
    if(num1>num2 && num1>num3)
    {
        largest =num1;
    }
    else if(num2>num1 && num2>num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }
    cout << "Largest number "<< largest;
    getch();
}
