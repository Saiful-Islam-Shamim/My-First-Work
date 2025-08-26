#include<iostream>
#include<conio.h>
using namespace std;
int rem, term;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main()
{
    int a,b;
    cout << "Enter Two number : ";
    cin >>a>>b;
    cout <<"gcd is : " <<gcd(a,b);
    getch();
}

