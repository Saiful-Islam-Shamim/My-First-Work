#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum += a;
        }
        int next = a + b;
        a = b;
        b = next;
    }

    cout << "Sum of Fibonacci numbers at even indexes: " << sum;
    return 0;
}

