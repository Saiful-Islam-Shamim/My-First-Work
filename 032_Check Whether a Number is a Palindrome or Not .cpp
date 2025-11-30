
#include <iostream>
using namespace std;

int main() {
    int n, originalNum, remainder, reversedNum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    originalNum = n;

    while (n > 0) {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }

    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome.";
    } else {
        cout << originalNum << " is not a palindrome.";
    }

    return 0;
}
