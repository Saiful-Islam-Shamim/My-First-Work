#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
   double length, width, area, perimeter;
   cout << "Enter length : ";
   cin >> length;
   cout << "Enter width : ";
   cin >> width;

   area = length * width;
   cout << "area is : "<<area << endl;
    perimeter = 2 * (length + width);
   cout << "perimeter is :"<< perimeter;
getch();
}
