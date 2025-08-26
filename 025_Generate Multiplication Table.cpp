#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter The number multiplication Table a : ";
   cin >> a;
    cout << "Enter the Tables number b : ";
    cin >> b;

    for(int i =1; i<=b; i++){
        cout << a <<" * " <<i <<" = "<< a * i<<endl;
    }
    //cout << multiple;


    getch();
}
