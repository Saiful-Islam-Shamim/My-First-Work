#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int a,b, temp;
    cout << "Enter Two number : ";
    cin >> a>>b;

    cout << "Before swapping "<<"a = "<< a << " \t " << "b = "<< b <<endl;

    temp = a;
    a = b;
    b = temp;


    cout << "After swapping "<<"a = "<< a << " \t " << "b = "<< b <<endl;

    getch();
}
