#include<iostream>
#include<conio.h>
using namespace std;


double addition(double num1, double num2){
    return num1 + num2;
}

double subtraction(double num1, double num2){
    return num1 - num2;
}

double multiplication(double num1, double num2){
    return num1 * num2;
}

double divition(double num1, double num2){
    double result;
    if(num2!=0){
        result = num1 / num2;
        cout << result;
    }else{
    cout << "Error! Division by zero.";
    }
    return result;
}
int main()
{
    double num1, num2;
    char op;

    cout << "Enter Num1 : ";
    cin >> num1;

    cout << "Enter Operator (+, -, *, /)";
    cin >> op;
    cout << "Enter Num2 : ";
    cin >> num2;


    switch(op){
    case '+':
        cout << "Addition of " <<num1 << " & "<< num2 << " is = " << addition(num1, num2)<<endl;
        break;
    case '-':
         cout << "Subtraction of " <<num1 << " & "<< num2 << " is = "<< subtraction(num1, num2)<<endl;
         break;
    case '*':
        cout << "Multiplicationof " <<num1 << " & "<< num2 << " is = " <<multiplication(num1, num2)<<endl;
        break;
    case '/':
        cout << "Divition of " <<num1 << " & "<< num2 << " is = "<< divition(num1, num2)<< endl;
        break;
    default:
        cout << "Enter digit";
    }






    getch();
}


