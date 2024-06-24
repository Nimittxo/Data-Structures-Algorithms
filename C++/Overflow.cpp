#include <iostream>
using namespace std;

int main() {
    const int n = 10000; // Number of iterations
    int value = 1;
    bool overflowDetected = false;

    for (int i = 0; i < n; ++i) {
        cout << "Iteration " << i*2 << ": " << value << endl;

        // Check for overflow
        if (value == INT32_MAX) {
            overflowDetected = true;
            cout << "Overflow detected at iteration " << i*2 << endl;
            break;
        }

        value = value * 2; // Double the value
    }

    if (!overflowDetected) {
        cout << "No overflow detected within " << n << " iterations." << endl;
    }

    return 0;
}
