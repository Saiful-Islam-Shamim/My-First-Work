#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;

int main() {

    int n;
    double principal, rate, time, amount, compoundInterest;

    cout << "Give Principal Amount: ";
    cin >> principal;

    cout << "Enter The Rate of Interest: ";
    cin >> rate;

    cout << "Enter time in Years: ";
    cin >> time;

    cout << "How many Times Interest is Compounded per Year: ";
    cin >> n;

    rate = rate / 100;
    amount = principal * pow(1 + rate / n, n * time);
    compoundInterest = amount - principal;

    cout << "Compound Interest = " << compoundInterest <<endl;
    cout << "Total Amount = " << amount;

    getch();
}
