#include <iostream>
using namespace std;

int main(){

    double time, rate, principal;

    cout << "Give Principal Amount: ";
    cin >> principal;
    cout << "Give Rate of Interest: ";
    cin >> rate;
    cout << "Give Time in Years: ";
    cin >> time;

    double simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest is: " << simpleInterest << endl;

    return 0;

}
