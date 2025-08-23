
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, sum=0;
    cout << "Enter natural Number :";
    cin >> n;

    for(int i=0; i<=n; i++)
    {
        sum +=i;
    }
    cout << "sum of natural number is : " <<sum;
    getch();
}
