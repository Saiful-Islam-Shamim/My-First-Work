#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a, b, swap_ato_b;
    cout << "Enter a and b : " <<endl;
    cin >> a >> b;

    swap_ato_b=a;
    a=b;
    b=swap_ato_b;
    cout << "a=" << a <<endl;
    cout << "b=" << b <<endl;

    getch();
}
