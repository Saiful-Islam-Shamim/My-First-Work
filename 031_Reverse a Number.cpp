#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int num, rem, reverse = 0;

    cout << "Enter a number : ";
    cin >> num;

    while(num!=0){
        rem = num % 10;
        reverse = rem + 10 * reverse;
        num/=10;
    }
    cout << reverse;
    getch();
}

