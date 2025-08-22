#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    float num;
    cout << "Enter a random number : ";
    cin >> num;

    if(num >0){
        cout << num << " is a positive Number";
    }else if(num<0){
    cout << num << " is a Negative number";
    }else if(num==0){
    cout << num << " is a Zero";
    }else{
    cout << "Enter a valid num";
    }
    getch();
}
