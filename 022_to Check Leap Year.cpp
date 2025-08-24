#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    int year;
    cout << "Enter any Year : "<< endl;
    cin >> year;

    if((year % 4==0)|| (year %  400==0 && year %100!=0))
        {
            cout << year <<" is leap yera";

    }else{
        cout << year <<" is not leap Yera";
    }

    getch();
}
