
#include <iostream>
using namespace std;

int main() {
    int low, high;

    cout << "Enter lower interval: ";
    cin >> low;
    cout << "Enter upper interval: ";
    cin >> high;

    cout << "Prime numbers between " << low << " and " << high << " are: ";

    for (int num = low; num <= high; num++) {
        if (num <= 1) continue;

        bool isPrime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) cout << num << " ";
    }

    return 0;
}
