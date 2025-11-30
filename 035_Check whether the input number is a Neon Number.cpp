
#include <iostream>
using namespace std;

int main() {
    int num, square, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    square = num * num;

    while (square > 0) {
        sum += square % 10;
        square /= 10;
    }

    if (sum == num)
        cout << "Neon Number";
    else
        cout << "Not Neon Number";

    return 0;
}
