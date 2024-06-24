/*
    ===============================================================================================================================================================
    ===============================================================================================================================================================
    This Program explains Looping and Recursions using the example of fibonacci Sequences
    ===============================================================================================================================================================
    =============================================================================================================================================================== 
*/


#include <iostream>
#include <cstdlib> // For atoi function
using namespace std;

// Function to calculate the Fibonacci number recursively
int fibo(int n) {
    if (n <= 1) {
        return n; // Base cases: F(0) = 0, F(1) = 1
    } else {
        return fibo(n - 1) + fibo(n - 2); // Recursive case
    }
}

int main(int argc, char *argv[]) {
    int n = 0;
    cin >> n;
    if (n < 0) {
        cout << "Fibonacci of a negative number doesn't exist." << endl;
    } else {
        cout << "Fibonacci of " << n << " is " << fibo(n) << endl;
    }

    return 0;
}
