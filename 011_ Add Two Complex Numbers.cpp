#include<iostream>
#include<conio.h>
using namespace std;
struct complex {
    double real;
    double imag;
};

int main()
 {
    complex num1, num2, sum;
    cout << "Enter real & imag of first complex num ";
    cin >> num1.real >> num1.imag;

    cout << "Enter real & imag of second complex num ";
    cin >> num2.real >> num2.imag;

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    cout << sum.real << "+" << sum.imag << "i";
     getch();
 }
