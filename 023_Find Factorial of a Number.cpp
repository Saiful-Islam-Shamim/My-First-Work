#include<iostream>
#include<conio.h>
using namespace std;
long long factorial(int n){
    if(n==0 || n==1)
        return 1;
        return n * factorial(n-1);

}


int main()
{
    int n;
    cout << "Enter a positive : ";
    cin >> n;

   if(n < 0) {
    cout << "fat is not defined" << endl;
   }else{
        cout << factorial(n);
   }
    getch();
}

